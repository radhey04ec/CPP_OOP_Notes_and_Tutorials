//Tutorial-8 Default Argument functionality in C++
//Jaydeep Shah - radhey04ec@gmail.com

#include <iostream>
using namespace std;

//Function declaration
//Note :Default argument value in function declaration only, not required in definition
double compute_intr(float period,double amount,double intr_rate = 7.3);

int main()
{

	//Local variables for storing user details
	double INR = 0,rate = 0;
	float  YEAR = 0;
	
	cout << "Enter Your Amount " << endl;
	cin >> INR;
	cout << endl << "Enter Period in Year" << endl;
	cin >> YEAR;
	cout << endl << "Computing INTR = " << compute_intr(YEAR,INR);  //Function call with default Argument value
	cout << endl <<"We consider INTR rate = 7.3%" << endl;
	cout << "Enter Your rate here : ";
	cin  >> rate;
	cout << endl << "New INTR = " << compute_intr(YEAR,INR,rate); //Function call without default Argument
	return 0;
}


//Function definition (function body)
//Here no default Argument required,only at declaartion time
double compute_intr(float period,double amount,double intr_rate)
{
	return((period * amount * intr_rate) / 100);
}
