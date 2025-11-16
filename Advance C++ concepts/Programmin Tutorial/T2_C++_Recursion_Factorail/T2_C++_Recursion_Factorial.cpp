//Tutorial :2 Recursion : When function call itself, useful to do repeat task
//Jaydeep shah (radhey04ec@gmail.com)


//Find Factorial of n, using recursion

#include<iostream>
using namespace std;

//Function for calculating factorial of n number
double factorial(int n)
{
	
	//Base condition 
	if(n == 0)
	{
		return (1);
	}
	
	double prv_factorial = factorial(n-1);
	return(n * prv_factorial);
}

int main()
{
	//Eneter last digit
	int n;
	cout << "Last digit of N : ";
	cin >> n;
	cout << endl << "Factorial OF UPTO N = " << factorial(n);
	return 0;
}
