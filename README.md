 # High-Low
 ---
### Contents
I. [Epics and User Stories](#I.-epics-and-user-stories)  
    I.1 [Epic](#epic)  
I.2 [User Stories](#I.2-user-stories)  
    I.2.1 [Number generation](#I.2.1-number-generation)  
    I.2.2 [Number input](I.2.2-number-input)  
    I.2.3 [Win/lose](#I.2.3-win/lose)  
    I.2.3 [Restart game](#I.2.4-restart-game)  
I.3 [Non-functional Requirements](#I.3-non-functional-requirements)  
I.4 [How We Addressed The Requirements](#I.4-how-we-addressed-the-requirements)  
II. [Genre](#II.-genre)  
III. [Technical details](#III.-technical-details)  
    III.1 [Platform](#III.1-platform)  
    III.2 [Programming Language/Enviroment](#III.2-programming-language/environment)  
    III.3 [Programming Challenges](#III.3-programming-challenges)  
    III.4 [Constructing And Implementing My Code](#III.4-constructing-and-implementing-my-code)  
    III.5 [Algorithms](#III.5-algorithms)  
    III.6 [Coding Standards](#III.6-coding-standards)  
IV. [Research](#IV-research)  
V. [Project management](#V-project-management)  
---
## I. Epics and User Stories
 ### I.1. Epic
  This is a game where the player rolls a 10-sided dice and guesses whether the number they rolled is higher or lower than the number the computer picks.
 ### I.2 User Stories
 #### I.2.1 Number generation
 The computer must generate a random number between 1 and 10(inclusive). The method for generating these numbers will have to be random every time. Two numbers will be generated this way, the computer roll, and then the player roll. These numbers will be compared, this will create the win condition if the player guesses their number is higher or lower than the computer roll. If they player guesses incorrectly, it will determine whether they lost or if it is a tie.
 #### I.2.2 Input
 The player must be able to input their choice when the program asks them to pick "higher or lower". There should only be two options, and any other choices should be invalid. The format for the choice must be string in order to avoid errors. 
 #### I.2.3 Win/Lose
 Based on the number the computer picks, and the guess the player chooses, the game should output either a "You win!" or "You lose!" message. If the game ends in a tie, then a "It's a tie!" message should appear instead. 
 
  #### I.2.4 Restart game
 After the first game, the player should be able to decide whether they wish to play another round or end the game by selecing either "Y" or "N" for Yes and No respectively. If they choose yes, the program should restart from the beginning, otherwise the program should end.
 ### I.3 Non-functional Requirements
 ### I.4 How We Addressed The Requirements
 ---
## II. Genre
## III. Technical details
### III.1 Platform
### III.2 Programming Language/Enviroment
### III.3 Programming Challenges
### III.4 Constructing And Implementing My Code
### III.5 Algorithms
### III.6 Coding Standards
## IV. Research
## V. Project management
