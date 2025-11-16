//Tutorial-11 Array with class and object
//Note do not use white space during entering details
//Jaydeep Shah - radhey04ec@gmail.com

#include <iostream>
using namespace std;

//Create global class to store employee data
class empl_cls
{
	//Default data is private
	char Name[30];                    //Array to store string type character data
	int  Age;
	int  Emp_Code;
	int  Salary;
	
	//Public method of access employee data
	public:
	void enter_emp_data(void);
	void show_emp_data(void);
	
};

//Definition of class member methods
void empl_cls::enter_emp_data()
{
	cout << endl << "-------------------------------------"  << endl;
	cout << "Name : (Without white space)";
	cin  >> Name;
	cout << endl << "Employee code = ";
	cin  >> Emp_Code;
	cout << endl << "Age : ";
	cin  >> Age;
	cout << endl << "Salary = ";
	cin >> Salary;
	cout << endl << "Detail Finish ...";
}

void empl_cls::show_emp_data()
{
	cout << endl << "****************************************" << endl;
	cout << "Emp code = " << Emp_Code << ", Name : " << Name << ", Age = " << Age << ", Salary : " << Salary << endl;
}

int main()
{
	//Suppose company have 3 employees
	empl_cls empl_details[3];  				//Array as object of class

	//Eneter details one by one
	int k = 0;
	for(k = 0; k <= 2; k++)
	{
		empl_details[k].enter_emp_data();
	}
	cout << endl << "Employee details entered sucessfully....";
	
	//Details showing
		for(k = 0; k <= 2; k++)
	{
		empl_details[k].show_emp_data();
	}
	
	return 0;
}
