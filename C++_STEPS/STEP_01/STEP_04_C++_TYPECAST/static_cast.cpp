/*
C++ Supports C style type casting and static_cast type casting.
1) static_cats<> is type safe , and check during compile time
2) C style typecast is not much safe, may be run time you will get error

What mean type safe??
>>For belw example compiler check double to integer is valid conversion. Safe for use

*/

#include<iostream>
using namespace std;


int main()
{
 
double pi 				= 3.145;
int pi_new 				= static_cast<int>(pi);   //C++ Type casting
int pi_old              = (int)pi;                //C style casting


//Note : Both are valid here (double to integer)
cout << "After static casting value of Pi = " << pi_new << endl;
cout << "After C old casting value of Pi = " << pi_old << endl;
 return 0;
}
