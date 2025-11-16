//Tutorial-15 Friend function.
//Friend function is not part of class, but possible to access private variable of any class (Function must be declare as friend inside class).
//Jaydeep Shah - radhey04ec@gmail.com

#include <iostream>
#include <string>
using namespace std;


//Class creation
class Scientist;			//Declaration - For avoiding error in friend function - it is using this class argument

class Engineers
{
	public :
		int income_tax_amount;

		friend void print_income_tax_amount(Engineers E, Scientist S, int n); //Friend function declaration
};

//Class creation (Definition)
class Scientist
{
	public :
		int income_tax_amount;

		friend void print_income_tax_amount(Engineers E, Scientist S, int n); //Friend function declaration
};


//Friend function body - Definition
void print_income_tax_amount(Engineers E, Scientist S, int n)
{
	switch(n)
	{
		case 1:
			cout << endl << "Enginners Income tax = " << E.income_tax_amount;
			break;
			
		case 2:
			cout << endl << "Scientist Income tax = " << S.income_tax_amount;
			break;
			
		default:
			cout << "Wrong Argument" << endl;
	}
}


int main()
{

	//Create object
	Engineers Eng;
	Scientist Sci;
	
	//Set income tax value
	Eng.income_tax_amount = 3000;
	Sci.income_tax_amount = 2200;
	
	print_income_tax_amount(Eng,Sci,1);
	print_income_tax_amount(Eng,Sci,2);
	
	

	return 0;
}
