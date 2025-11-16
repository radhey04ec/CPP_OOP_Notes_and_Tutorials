//Tutorial-9 Constatnt Argument in function
//Useful when we want to only process / compute something without modification original data
//Important : Useful when Address or pointer will pass to function
//Jaydeep Shah - radhey04ec@gmail.com

#include <iostream>
using namespace std;


//Constant Argument inside function
//We can not change either length or string, we can only proceed with using local varaible inside function
void print_my_data(const char* point,const int length)
{
	int count = 0;
	while (count < length)
	{
		cout << *(point + count);
		count++;
	}

	//Uncomment below - it will genrate compile time error
	//length++;        //Error = Modification of const argument varaible
	
}

int main()
{
	//Store predefined string in chaarcter Array
	char str_data[] = "This is constant argument example";

	//Function call
	print_my_data(str_data, sizeof(str_data));


	return 0;
}
