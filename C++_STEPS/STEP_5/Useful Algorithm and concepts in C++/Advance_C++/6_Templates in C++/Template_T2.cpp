//T2: Template in C++
//Tenmplate with two different function

#include<iostream>
using namespace std;

//Use two different datatype with class
template<class my_datatype,class my_datatype_2>class test
{
	private:
		my_datatype x;
		my_datatype_2 y;
	public:
		
		//Constructor function
		test(my_datatype a,my_datatype_2 b)
		{
			x = a;
			y = b;
			
			cout << endl << "Sucessfully set x =" << x << "; y = "<< y;
		}
};


int main()
{
	//Create object, pass dattype information
	test <char,int>t1('a',3);
	test <double,int>t2(3.14,78);
	return 0;
}
