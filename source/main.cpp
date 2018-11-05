/* A simple game where the player must guess if their roll is higher or lower than the computer's roll. */
/* By Fabijus Sobolevas */
/* Version 1.2 */ 
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
  
    cout << "Higher or Lower?" << endl;

    getline (cin,choice);

  /* Asks for choice input until it's either "lower" or "higher" */
  if (choice != "higher" && choice != "lower") 
  {
  do {
      cout << "Invalid choice, try again." << endl;
      getline (cin,choice);
  } 
  while (choice != "higher" && choice != "lower");
  }

  /*  */
  if (cPick > pPick && choice == "higher"  || cPick < pPick && choice == "lower" )
    cout << "You lose!" << endl;
  else if (cPick < pPick && choice =="higher" || cPick > pPick && choice =="lower")
     cout << "You win!" << endl;
  else
    cout << "It's a tie!" << endl;

  cout << "The computer rolled: " << cPick << endl;
  cout << "The player rolled: " << pPick << endl;

  cout << "Try again? Y/N " << endl;
  
  getline(cin,restart);

 if (choice != "y" && choice != "n") 
  {
  do {
      cout << "Invalid choice, try again." << endl;
      getline (cin,choice);
  } 
  while (choice != "y" && choice != "n");
  }
}

