//play again 2.0
//Demonstrates do loops

#include <iostream>

using namespace std;
int main()
{
  char again;
  do
  {
    cout <<"\n**Played an exciting game**";
    cout <<"\nDo you want to play again? (y/n)";
    cin >>again;
  } while (again=='y');
  
  cout <<"\nOkey. bye.";

  return 0;

}
