//Templates in C++ 
//A template is a simple yet very powerful tool in C++. 
//The simple idea is to pass the data type as a parameter so that we don’t need to write the same code for different data types


//Example : Find maximum value using function maxi - which can support multiple datatype.
#include<iostream>
using namespace std;


//Write genric function - return type is "J" , and argument type "J" (which is created using template)
template <typename J> J maxi(J x, J y)
{
	return ((x > y) ? x : y);
}

int main()
{
	//Call function including passing datatype
	cout << "Maxi between 3 and 7 is " << maxi<int>(3,7) << endl;
	
	//Call generic function with datatype
	cout << "Maxi between 4.6 and 3.14 is " << maxi<double>(4.6,3.14) << endl;
	
	//Call generic function with datatype
	cout << "Maxi between 'a' and 'b' is " << maxi<char>('a','b') << endl;
	
	
	return 0;
}
