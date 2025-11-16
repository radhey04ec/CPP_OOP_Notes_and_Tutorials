//Tutorial-4 - Enumerator
//Jaydeep Shah - radhey04ec@gmail.com

#include <iostream>
using namespace std;

//Create enumerator
enum Gender
{
    MALE,
    FEMALE,
};


int main()
{

	//enume varaible
	Gender gender;
	gender = MALE;
	
	switch(gender)
	{
    case MALE:
        cout<<"MALE";
        break;
    case FEMALE:
        cout<<"FEMALE";
        break;
	}
	return 0;


}

