//Write a c++ program to enter base and height of a triangle and find its area.

#include<iostream>
using namespace std;

int main()
{
  //Declare the variables
  int a,b,c;
  cout << "Enter base of triangle"<<endl;       //Ask the user to enter the value
  cin >>a;
  cout << "Enter height of triangle"<<endl;
  cin >>b;
  c = (a*b)/2;                        // Converting the value to desired form
  cout << "The area of triangle is " << c <<endl;  //Giving result to user
  return 0;
}
