//Tutorial-13 static variable inside class
//Note that after declaration,definition of static variable also required.
//Jaydeep Shah - radhey04ec@gmail.com


/*
	Static variable : It act like global, lifetime throughout code, but only accessible inside class or function
	For class : only one copy created for that class, doesnt depend on how many object created
	static variable declare inside class,but need to define after declaration.
*/


#include <iostream>
#include <string>
using namespace std;

class abc
{
	public:
	static int stc_var;			//Static varaible declaraion inside class
	int x;

};


//static varaible defined - This must required
int abc::stc_var;

int main()
{

	//Create First object
	abc obj1;
	obj1.stc_var = 10;
	obj1.x		 = 3;
	
	//Create second object
	abc obj2;
    cout << "Static varaible access by second object and value is : " << obj2.stc_var;

	
	return 0;
}
