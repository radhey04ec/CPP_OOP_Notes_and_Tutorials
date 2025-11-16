//Tutorial-10 Function overloading (Polymorphism - OOP)
//Same function name with different arguments (in terms of number or data-type) known as functional overloading
//Jaydeep Shah - radhey04ec@gmail.com

#include <iostream>
using namespace std;

//All function family with same name "ADD"
//Function 1 with integer type argument
int ADD(int x,int y)
{
	cout<<"We are in Function #1 "<<endl;
	return (x + y);
}

//Function 2 with double type Argument
double ADD(double x,double y)
{
	cout <<"We are in Funcction #2" << endl;
	return(x + y);
}

//Function 3 with different number of arguments
int ADD(int x,int y,int z)
{
	cout << "We are in function #3" << endl;
	return(x+y+z);
}

int main()
{
	//Execution of multiple instruction is Right to Left flow
	cout <<"Addition of 3 and 5 = "<< ADD(3,5) <<endl;
	cout <<"Addition of 3.2 and 5.09 = "<< ADD(3.2,5.09) <<endl;
	cout <<"Addition of 3 and 5 and 2 = "<< ADD(3,5,2) <<endl;

	return 0;
}
