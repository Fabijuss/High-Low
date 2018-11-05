/* A simple game where the player must guess if their roll is higher or lower than the computer's roll. */
/* By Fabijus Sobolevas */
/* Version 1.3 */ 
#include <time.h> /* time */
#include <stdlib.h> /* srand, rand  */
#include <iostream>
using namespace std;

int main() 
{ 
  int cPick;
  int pPick;
  string choice;
  string restart;
  /* Generates random seed using the current time */
  srand(time(NULL));
  /* Generates a random number between 1-10 using time seed */
  cPick = rand() % 10 + 1;
  pPick = rand() % 10 + 1;

    cout << "Higher or Lower? (higher/lower)" << endl;

    getline (cin,choice);

/* Asks for input until choice is either "lower" or "higher"  */
/* Preconditions: Input must equal either "lower" or "higher" */
/* Postconditions: Will ask for input if choice is invalid */
  if (choice != "higher" && choice != "lower") 
  {
  do {
      cout << "Invalid choice, try again." << endl;
      getline (cin,choice);
  } 
  while (choice != "higher" && choice != "lower");
  }

  /* Decide winner */
  if ((cPick > pPick && choice == "higher") || (cPick < pPick && choice == "lower"))
    cout << "You lose!" << endl;
  else if ((cPick < pPick && choice =="higher") || (cPick > pPick && choice =="lower"))
     cout << "You win!" << endl;
  else
    cout << "It's a tie!" << endl;

  cout << "The computer rolled: " << cPick << endl;
  cout << "The player rolled: " << pPick << endl;

  /* Restart program */
  cout << "Try again? (y/n) " << endl;

  getline(cin,restart);

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
}