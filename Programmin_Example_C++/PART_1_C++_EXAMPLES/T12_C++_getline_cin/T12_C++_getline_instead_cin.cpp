//Tutorial-12 getline() function instead of cin >>, getline only work with string type
//cin object is not work with white space, alternative solution is getline()
//Jaydeep Shah - radhey04ec@gmail.com

#include <iostream>
#include <string>
using namespace std;

class students
{
	
	string Name;
	int  RollNumber;
	public:
		void enter_details()
		{
			cout << endl << "Student details : " << endl;
			cout << "Name = ";
		    std::getline(std::cin >> std::ws,Name);   //getline only work with string type
			cout << endl << "RollNumber = ";
			cin  >> RollNumber;
		}
		void show_details()
		{
			cout << endl << "Student Details : " << endl;
			cout << "Name = " << Name <<"; RollNumber = " << RollNumber << endl;
		}
};

int main()
{

//Create object
students student[3];
int k = 0;

//Enter student details
	for(k = 0; k <= 2; k++)
	{
		student[k].enter_details();
	}
	
	cout<< endl <<"Details Filling completed"<<endl;
	for(k = 0; k <= 2; k++)
	{
		student[k].show_details();
	}
	
	return 0;
}
