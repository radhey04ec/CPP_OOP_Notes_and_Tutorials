//Tutorial-7 Inline Function - Pre processor/Compiler replace function call with function body
//Ideally use for small function - For mostly High speed execution
//Function only become inline if no looping or switch statement inside body like for/do/while/switch and also function not contains any recursion
//Jaydeep Shah - radhey04ec@gmail.com

#include <iostream>
using namespace std;

//Inline function - "inline" prefix required
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

