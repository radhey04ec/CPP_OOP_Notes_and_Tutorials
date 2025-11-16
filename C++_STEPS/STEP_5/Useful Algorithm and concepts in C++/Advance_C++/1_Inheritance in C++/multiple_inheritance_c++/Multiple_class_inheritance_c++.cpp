//Multiple class inheritance
//Multiple base class (Parent class)  and one derived class (child class)

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

//Other base class
class B
{
	public:
		void print_B()
		{
			cout << endl << "Call method in Class B";
		}
	
};

//Derived class(Multiple base class)
class C : public A, public B
{
	//Nothing inside C	
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
