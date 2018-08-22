//Write a c++ program to enter two angles of a triangle and find the third angle.

#include<iostream>
using namespace std;

int main()
{
  //Declare the variables
  int a,b,c;
  cout << "Enter first angle of triangle"<<endl;       //Ask the user to enter the value
  cin >>a;
  cout << "Enter second angle of triangle"<<endl;
  cin >>b;
  c = 180-(a+b);                        // Converting the value to desired form
  cout << "The third angle is " << c <<endl;  //Giving result to user
  return 0;
}
