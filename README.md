 # High-Low
 ---
### Contents
I. [Epics and User Stories](#-epics-and-user-stories)  
    I.1 [Epic](#epic)  
I.2 [User Stories](#user-stories)  
    I.2.1 [Number generation](#number-generation)  
    I.2.2 [Input](#input)  
    I.2.3 [Win/lose](#win-lose)  
    I.2.3 [Restart game](#restart-game)  
I.3 [Non-functional Requirements](#non-functional-requirements)  
I.4 [How We Addressed The Requirements](#how-we-addressed-the-requirements)  
II. [Genre](#genre)  
III. [Technical details](#technical-details)  
    III.1 [Platform](#platform)  
    III.2 [Programming Language/Enviroment](#programming-language/environment)  
    III.3 [Programming Challenges](#programming-challenges)  
    III.4 [Constructing And Implementing My Code](#constructing-and-implementing-my-code)  
    III.5 [Algorithms](#algorithms)  
    III.6 [Coding Standards](#coding-standards)  
IV. [Research](#research)  
V. [Project management](#project-management)  
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
 After the first game, the player should be able to decide whether they wish to play another round or end the game by selecing either "Y" or "N" for Yes and No respectively. If they choose yes, the program should restart from the beginning, otherwise the program should end.
 ### Non-functional Requirements
 ### How We Addressed The Requirements
 ---
## Genre
## Technical details
### Platform
### Programming Language/Enviroment
### Programming Challenges
### Constructing And Implementing My Code
### Algorithms
### Coding Standards
## Research
srand (http://www.cplusplus.com/reference/cstdlib/srand/  
logical operators http://www.cplusplus.com/doc/tutorial/operators/  
do while loop (http://www.cplusplus.com/doc/tutorial/control/)
## Project management
