//Tutorial-5 - Referece - Alais or use old varaible with new name (OOP - Polymorphism)
//Jaydeep Shah - radhey04ec@gmail.com

#include <iostream>
using namespace std;


//Original Variable
int addition = 100;
int &sum	 = addition;    //Reference varaible

int main()
{

	cout <<"Value of addition = " << addition << endl;
	cout <<"Value of sun =" << sum << endl;
	
	return 0;
}

