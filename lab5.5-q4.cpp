//library
#include<iostream>
using namespace std;

//main function
int main(){

//initialising variables
int i;
int n;
int l=1;
cout <<"define n ";
cin >>n;

//loop
for(int i=n;i>=1;i--){

//print i-1 spaces
for (int a=0;a<i-1;a++){
cout <<" ";
}

//print l plus
for (int b=0;b<1;b++){
cout <<"* ";
}

//make l=l+2
l+=2;

//end 
cout <<endl;
}

//terminate
return 777;
}



