//Tutorial :3 Recursion : When function call itself, useful to do repeat task.
//Jaydeep shah (radhey04ec@gmail.com)


//Fibonacci series using recursion
#include<iostream>
using namespace std;


//Function for print Fibonnaci series upto N number
int Fibonacci(int n)
{
	//0,1,1,2,3,5 ....   Fibonnaci is series of upto N number where Nth digit is sum of (N-1) + (N-2)

	if(n == 1)
	{
	
		return 1;
	}
	if(n == 0)
	{
	
		return 0;
	}
	
	int current_digit = (Fibonacci(n-1) + Fibonacci(n-2));
	return(current_digit);
}

int main()
{
	//Eneter last digit
	int n;
	cout << "Pass index of Fibonacci number: ";
	cin >> n;
	cout << endl << "Fibonacci number of given index is = " << Fibonacci(n);
	return 0;
}
