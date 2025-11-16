//Tutorial-7 Inline Function - Pre processor/Compiler replace function call with function body
//Ideally use for small function - For mostly High speed execution
//Jaydeep Shah - radhey04ec@gmail.com

#include <iostream>

using namespace std;

//Inline function
inline double cube(double a)
{
	return (a * a *a);
}

int main()
{

	int a = 3;
	cout << "Cube of a is = "<< cube(a);
	return 0;
}

