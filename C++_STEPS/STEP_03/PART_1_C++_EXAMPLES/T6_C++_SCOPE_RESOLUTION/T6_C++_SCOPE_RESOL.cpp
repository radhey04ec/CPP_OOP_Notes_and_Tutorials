//Tutorial-6 - Scope resolution - Scope of varaible
//1)Use to define function outside the class 2)Access global varaible inside local block
//Jaydeep Shah - radhey04ec@gmail.com

#include <iostream>

using namespace std;

//Global Varaible m
int m = 10;

int main()
{
	//First Block
	int m = 20;

	//Second Block
	{
		int k = m;
		int m = 30;
		cout << "we are in inner block \n";
		cout << "k=" << k << endl;
		cout << "m=" << m << endl;
		cout << ":: m=" << ::m << endl;
	}
	cout << "\n we are in outer block \n";
	cout << "m=" << m << endl;
	cout << ":: m=" << ::m << endl;

	return 0;
}

