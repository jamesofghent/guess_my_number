//score rater
//Demonstrates the if statement

#include <iostream>
using namespace std;

int main()
{
  if (true)
  {
     cout <<"this is always displayed.\n\n";
  }
  if (false)
  {
     cout <<"this is never diplayed.\n\n";
  }
  int score=1000;
  if (score)
  {
     cout <<" At least you did not score zero.\n\n";
  } 
  if (score > 250)
  {
     cout << "you scored 250 or more. decent.\n\n";
  }
  if (score >=500)
  { 
     cout <<"you scored 500 or more. nice.\n\n";
     if (score>=1000)
     {
         cout <<"yoou scored 1000 or more. impresssive!\n\n";
     }

}
 return 0;


}


