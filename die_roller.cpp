//die roller 
//demonstrates generating random numbers

#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
  srand(static_cast<unsigned int>(time(0)));
  //seed random generator
  
  int randomNumber = rand();
  //generate random number
  int die = ( randomNumber % 6 ) + 1;
  //get a number beteen 1 and 6
  cout <<" You rolled a "<< die<< endl<< endl;

  return 0;

}
