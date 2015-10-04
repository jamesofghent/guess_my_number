//designers network
//demonstrates logical operators

#include <iostream>
#include <string>
using namespace std;

int main()
{
  string username;
  string password;
  bool success;

  cout <<"\tGame Designer's Network\n";
  
  do 
  {
    cout <<"\nUsername:";
    cin >>username;

    cout <<"\nPassword:";
    cin >>password;

   if (username == "B.Wilson" && password == "bagel")
   { 
     cout <<"\nSup BC."<<endl;
     success = true;
   }

   else if (username == "Jamesofghent" && password == "0419")
   {
     cout << "\nYou da man James!"<< endl;
     success = true;
   }

   else if (username == "guest" || password == "guest")
   {
     cout <<"\nWelcome are you a hacker?" << endl;
     success = true;

   }

   else
   {
     cout <<"\nStop it you hacker!!!!!!" << endl;
     success = false;
   }
 }while (!success);

 return 0; 
}
