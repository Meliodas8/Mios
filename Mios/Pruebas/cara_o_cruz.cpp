#include <iostream>
#include <stdlib.h>
#include <ctime>
using namespace std;

int main() 
{
  
  // Create a number that's 0 or 1
  
  srand (time(NULL));
  int	coin = rand() % 2;
  
  // If number is 0: Heads
  // If it is not 0: Tails
  
  if (coin == 0) 
  {
  
    cout << "Heads\n";
  
  }
	else 
    {
	
    cout << "Tails\n";
  
  }
  system("pause");
  return 0;
}