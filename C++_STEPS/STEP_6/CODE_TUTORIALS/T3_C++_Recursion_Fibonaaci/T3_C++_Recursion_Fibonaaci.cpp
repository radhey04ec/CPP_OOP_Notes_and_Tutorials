//Tutorial :3 Recursion : When function call itself, useful to do repeat task.
//Jaydeep shah (radhey04ec@gmail.com)
//Fibonacci series using recursion

/*
---------------------------------------------------------------------------------------------------
Basic Notes (For Recursive problem):
>> Breakdown Large issue into smaller components - Thnik about how to solve smalles issue
>> Identify recursive task (repeat task) needed to address the probelm.
>> Example: if task need to be done n times, then what is solution / answer for (n-1) input.
>> Determine the base case: Solution for smaller possible input.

Important:
>> Ideal case for Recursive Function : It contains two return statement, 1) in base case - to return base case value 2)For return final value / answer.
>> Always ensure base condition, otherwise RAM overflow, Wrong answer and infinite looping possible.

In Recursive Function:
- Thing / logics written above from Recursive function call() (Inside Recursive function) will run in ascending order untill base condition acheive.
- Base condition will run only for single time.
- Thing / logics mentioned below from Recursive function call() (Inside Recursive function) will be run in descending order.
---------------------------------------------------------------------------------------------------
*/


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
