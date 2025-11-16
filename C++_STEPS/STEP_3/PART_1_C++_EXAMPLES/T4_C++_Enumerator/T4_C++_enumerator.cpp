//Tutorial-4 - Enumerator
//Jaydeep Shah - radhey04ec@gmail.com

#include <iostream>
using namespace std;

//Create enumerator - Important use is connect number to meaningful words
enum Gender
{
    MALE = 1,
    FEMALE,
};


int main()
{

	//enume varaible
	Gender gender;
	gender = FEMALE;
	
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

