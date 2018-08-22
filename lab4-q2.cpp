//Write a c++ programe to enter temperature in celcius and convert it into Fahrenheit.

#include<iostream>
using namespace std;

int main()
{
  //Declare the variables
  float a,b;
  cout << "Enter the temp. in celcius"<<endl;       //Ask the user to enter the value
  cin >>a;
  b = 9/5*a + 32;                        // Converting the value to desired form
  cout << "The temp. in Fahrenheit is" <<b<<endl;  //Giving result to user
  return 0;
}
  
