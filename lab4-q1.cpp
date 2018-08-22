//Write a c++ prograne to enter length in centimeter and convert it into meter and kilometer.

#include<iostream>
using namespace std;

int main()
{
  //Declaring the variables
  float a,b,c;
  cout << "Please enter the length in centimeter"<<endl;  //Ask the user to enter the value
  cin >> a;
  b = a/100;                                        //Converting the value to desired form 
  c = a/1000;
  cout << "Your length in meter is" <<b<<"meters"<<endl;
  cout << "Your length in kilometer is" <<c<<"kilometers"; //giving back result to user
  return 0;
}
