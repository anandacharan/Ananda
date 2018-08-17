// include library
#include <iostream>
using namespace std;
// main function
int main()
{
int a,b,sum,substract,product,remainder ; //declaration
float division;
a = 5; //definition
b = 3; //definition

sum = a + b; //add two numbers
substract = a - b; //calculates the difference
product = a * b; //calculates the product
division = a / b;
//finds the reminder 
//displaying the calculations in the terminal
cout << "numbers are " << a << " ' " << b << endl;
cout << "sum is" << sum << endl;
cout << "difference is "  << substract << endl;
cout << "product is" << product << endl;
cout << "remainder is " << remainder << endl;
return 0;
}
