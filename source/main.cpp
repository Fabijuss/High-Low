/* A simple game where the player must guess if their roll is higher or lower than the computer's roll. */
/* By Fabijus Sobolevas */
/* Version 1.0 */ 
#include <time.h> /* time */
#include <stdlib.h> /* srand, rand  */
#include <iostream>
using namespace std;

int main() 
{ 
  int cPick;
  /* Generates random seed using the current time */
  srand(time(NULL));
  /* Generates a random number between 1-10 using time seed */
  cPick = rand() % 10 + 1;

  cout << "The computer rolled: " << cPick << endl; 
}