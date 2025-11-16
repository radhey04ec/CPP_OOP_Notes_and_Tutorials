
//C++ Tutorila 1 -Class and Object in OOP
//Tutorial #1 (Jaydeep Shah - radhey04ec@gmail.com)

#include<iostream>
using namespace std;

//Create Class
class employess {
public:
	string Name;
	int    Age;
	int    Salary;

	void display_employee_details()
	{
		cout << "Name = " << Name << ", Age = " << Age << endl;
			
	}
};

int main()
{
	//Create object
	employess emp1;
	emp1.Name = "Jaydeep";
	emp1.Age = 30;
	emp1.display_employee_details();
	return 0;
}