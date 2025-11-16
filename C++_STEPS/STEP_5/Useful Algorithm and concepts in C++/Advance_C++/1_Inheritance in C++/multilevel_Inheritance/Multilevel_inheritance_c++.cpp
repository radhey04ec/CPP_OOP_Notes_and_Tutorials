//Multilevel inheritance
//One class is derived from other derived class known as multilevel inheritance.

//Note : Only public and protected variables and function inherited, private method or variable never inherited from base to derived class

#include<iostream>
using namespace std;


//create base class
class A
{
	public:
		void print_A()
		{
			cout << endl << "Class A method call";
		}
};

//Derived class
class B : public A
{
	public:
		void print_B()
		{
			cout << endl << "Class B method call";
		}
	
};


//Multilevel inheritance
class C : public B
{
	public:
		//Nothing
	
};


int main()
{
	//Create object
	C test;
	//call method of class A from object of class C
	test.print_A();
	
	//call method of class B from object of class C
	test.print_B();
	
	return 0;
}
