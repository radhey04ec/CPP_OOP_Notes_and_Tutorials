//Tutorial-3 - Memeber function defined outside the class
//Jaydeep Shah - radhey04ec@gmail.com

#include <iostream>
using namespace std;


//Create class
class people
{
	//Default Access is private
	char Name[30];
	int Age;
	
	public:
		void details_entred(void);
		void display_details(void);
};

//Function defined ouside of class - using :: scope resolution
void people::details_entred()
{
	cout << "Enter Person name : ";
	cin >> Name;
	cout << endl;
	cout << "Enter Age : ";
	cin >> Age;
	cout << endl;
	
	
}

void people::display_details()
{
	cout << "Here is data - " << endl;
	cout << "Person name = " << Name << endl;
	cout << "Person Age is = "<< Age << endl;
	
}

int main()
{
	
	//Create object
	people p1;
	p1.details_entred();
	p1.display_details();
	return 0;
	

}
