//Single class inheritance
//One base class (Parent class)  and one derived class (child class)

//Note : Only public and protected variables and function inherited, private method or variable never inherited from base to derived class

#include<iostream>
using namespace std;


//create base class
class A
{
	public:
		void print_A()
		{
			cout << endl << "Call method in class A";
		}
};

//Derived class from base class
class B : public A
{
	public:
		//Nothing inside class B (But all functionality of class A is available)
	
};

int main()
{
	//Create object
	B test;
	//call method of class A from object of class B.
	
	test.print_A();
	return 0;
}
