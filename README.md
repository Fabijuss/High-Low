# High-Low
 ---
### Contents
I. [Epics and User Stories](#epics-and-user-stories)  
&nbsp;&nbsp;I.1 [Epic](#epic)  
&nbsp;&nbsp;I.2 [User Stories](#user-stories)  
&nbsp;&nbsp;&nbsp;&nbsp;I.2.1 [Number generation](#number-generation)  
&nbsp;&nbsp;&nbsp;&nbsp;I.2.2 [Input](#input)  
&nbsp;&nbsp;&nbsp;&nbsp;I.2.3 [Win/lose](#win-lose)  
&nbsp;&nbsp;&nbsp;&nbsp;I.2.3 [Restart game](#restart-game)  
&nbsp;&nbsp;I.3 [Non-functional Requirements](#non-functional-requirements)  
&nbsp;&nbsp;&nbsp;&nbsp;I.3.1 [Display Outcomes](#display-outcomes)  
&nbsp;&nbsp;&nbsp;&nbsp;I.3.2 [Limit Inpuits](#limit-inputs)  
&nbsp;&nbsp;I.4 [How We Addressed The Requirements](#how-we-addressed-the-requirements)  
II. [Genre](#genre)  
III. [Technical details](#technical-details)  
&nbsp;&nbsp;III.1 [Platform](#platform)  
&nbsp;&nbsp;III.2 [Programming Language/Environment](#programming-language-and-environment)  
&nbsp;&nbsp;III.3 [Programming Challenges](#programming-challenges)  
&nbsp;&nbsp;III.4 [Constructing And Implementing My Code](#constructing-and-implementing-my-code)  
&nbsp;&nbsp;III.5 [Algorithms](#algorithms)  
&nbsp;&nbsp;III.6 [Coding Standards](#coding-standards)  
IV. [Research](#research)  
V. [Project management](#project-management)  
&nbsp;&nbsp;V.1 [Flowchart](#flowchart)

## Epics and User Stories
 ### Epic
  This is a game where the player rolls a 10-sided dice and guesses whether the number they rolled is higher or lower than the number the computer picks.
  
 ### User Stories
 #### Number generation
 The computer must generate a random number between 1 and 10(inclusive). The method for generating these numbers will have to be random every time. Two numbers will be generated this way, the computer roll, and then the player roll. These numbers will be compared, this will create the win condition if the player guesses their number is higher or lower than the computer roll. If they player guesses incorrectly, it will determine whether they lost or if it is a tie.
 
 #### Input
 The player must be able to input their choice when the program asks them to pick "higher or lower". There should only be two options, and any other choices should be invalid. The format for the choice must be string in order to avoid errors. 
 
 #### Win-Lose
 Based on the number the computer picks, and the guess the player chooses, the game should output either a "You win!" or "You lose!" message. If the game ends in a tie, then a "It's a tie!" message should appear instead. 
 
  #### Restart game
 After the first game, the player should be able to decide whether they wish to play another round or end the game by selecting either "Y" or "N" for Yes and No respectively. If they choose yes, the program should restart from the beginning, otherwise the program should end.
 
 ### Non-functional Requirements
#### Display outcomes
After the player has chosen between “higher/lower”, they should be able to see the number that the player and the computer have rolled, so they can compare how close the numbers were.

#### Limit Inputs
The player should not be able to enter random inputs when prompted to enter something. For example, when picking between “higher/lower” they should only be able to pick one of the two options. 

 ### How We Addressed the Requirements
A plan was created in order to split up the requirements into actionable steps. From this point, these steps were followed by creating a flowchart so that they can be visualised easier, and then implemented into actual code. 

## Genre
The game is a command-line based single-player guessing game against a computer.

## Technical details
### Platform
The program was created using an online IDE named ![repl.it](https://repl.it/) This IDE has a number of features which increases ease of use during the development process.

### Programming Language and Environment
The language used for this project is C++.

### Programming Challenges
+ Creating two separate random numbers
+ Restarting the program

### Constructing and Implementing My Code
The first phase of constructing the code, was to create a flowchart of the algorithm in order to visualise the requirements easier. Once the flowchart was created, the code was ready to be implemented. 

The first task being to generate a random number, this was done by using srand to generate a random seed, as well as using the time library so that the seed generation was done using time to ensure it is always random. Because time was used as the random number seed, it means that two numbers can be generated randomly as long as they are not created at the same time. This allowed me to generate the player and computer numbers. 

The next step was to compare the two numbers to determine the winner. This was done by using simple greater/less than logic along with an ‘and’ condition for the player choice (higher/lower).

 The next step was to limit the inputs to only be the available options to avoid errors. This was done by using a ‘do while’ loop, meaning it will keep asking for an input while the inputs don’t meet the condition.
 
The final step was to add the option of restarting the program. This was done by asking for an input, if the input was yes then the program would run the main code again, otherwise the program would do nothing, which would cause it to end. 

### Algorithms
There are a few algorithms which were used to create this program. 
The first algorithm is the random number generation:

    srand(time(NULL));
    cPick = rand() % 10 + 1;
    pPick = rand() % 10 + 1;

This algorithm generates two random numbers using srand and time. Since time can never be the same, it will always result in two different numbers. This generates two numbers in the range of 1-10 inclusive, normally it would generate 0-9 inclusive but adding a +1 shifts up the range. 

The second algorithm is the do while loop for the inputs:

    if (choice != "higher" && choice != "lower") 
    {
    do {
        cout << "Invalid choice, try again." << endl;
        getline (cin,choice);
    } 
    while (choice != "higher" && choice != "lower");
    }

This algorithm asks for an input from the user until the input is either “higher” or “lower”. The do while loop ensures that the user cannot enter anything besides the specified answers, as it will do the loop until the conditions are met.

The third algorithm is the decision making for the winner:

    if ((cPick > pPick && choice == "higher") || (cPick < pPick && choice == "lower"))
      cout << "You lose!" << endl;
    else if ((cPick < pPick && choice =="higher") || (cPick > pPick && choice =="lower"))
       cout << "You win!" << endl;
    else
      cout << "It's a tie!" << endl;

This algorithm uses the two randomly generated numbers, and the user’s choice from the previous algorithm in order to decide who the winner is. The first part of the decision checks if the computer roll (cPick) is higher or lower than the player’s roll (pPick). 

The second part is based on the player’s choice. For the win condition, it checks if either two possible win conditions are met. For the loss condition, it checks if either two of the loss conditions are met. The draw is decided if the other conditions are not met.

The final algorithm is for the restart of the program:

    if (restart != "y" && restart != "n") 
    {
    do {
        cout << "Invalid choice, try again." << endl;
        getline (cin,restart);
    } 

    while (restart != "y" && restart != "n");
    }

     if (restart == "y") 
    {
        main();
    }

    else {}

This uses the same ‘do while’ loop as the first algorithm to ensure that the input is valid. The while loop will check what the player has chosen, then if the player has chosen to restart, it will simply run the whole program from the beginning. Otherwise, it will do nothing, in turn causing the program to end.

### Coding Standards
One tab per level of indentation.   
Example:   

    x = 1   
    y = 1   
    code
    {
     if x == y:   
      do something() if true:   
    }

#### Naming    
camelCase with no underscores between words.   
Example:   

     variableName   
Not:   

     variable-name   

#### Comments   
Should be above the code, using // to comment. No inline comments.  
Example:  

    /* this is code   */
    code()   
    
#### Spacing   
There should a space separating every element unless there is an operator.   
Example:  

    var space = 1   
    division = numberOne/numberTwo   
Not:   

    var space=1
   
#### Functions
The braces symbol should always be on a new line.   
Example:   

    int main() 
    {
    code
    }

Not:

    int main() {
    code
    }



## Research
srand (http://www.cplusplus.com/reference/cstdlib/srand/)  
logical operators (http://www.cplusplus.com/doc/tutorial/operators/)  
do while loop (http://www.cplusplus.com/doc/tutorial/control/)
## Project management
### Flowchart
![High or low flowchart](https://i.imgur.com/b6kF6yM.png)
