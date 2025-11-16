//Tutorial-14 Pass by reference and pass by value
//Pass by ref : Object Address will pass to function, operation occure on original function
//Pass by val : Copy of original object pass as argument, original object remain unchange
//Jaydeep Shah - radhey04ec@gmail.com

#include <iostream>
#include <string>
using namespace std;


//Create class
class set_get_time
{
	int Hour,Minute,Second;
	
	public:
		
		//Pass by value example
		void set_clock_time(int h,int m, int s)
		{
			//Set varaible
			Hour = h;
			Minute = m;
			Second = s;
			cout << endl << "Time set sucessfully --" << endl;
		}
		
		//Pass by reference example
		void get_clock_time(set_get_time *t)
		{
			cout << endl << "Time : Hour = " << t->Hour <<", Minute : " << t->Minute << ", Second : " << t->Second;
		}
		
	
};


int main()
{

	//Create object
	set_get_time time;
	
	//Pass by value
	time.set_clock_time(10,15,12);  //Set time 10:15:12
	
	//Pass By reference - Get Time
	time.get_clock_time(&time);  //Obj Address pass

	return 0;
}
