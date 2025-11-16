//Problem: Addition of n number using Recursion

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



/*
SUM OF N NUMBER =  1 + 2 + 3 + 4 + 5 +....+N
Example : SUM OF FOUR NUMBER = 1 + 2 + 3 + 4  = SUM UPTO(3) + 4
GENRAL CASE (PSUDO CODE) SUM OF(N)  = SUM OF (N-1) + N
Base condition = Sum of (1) = 1
*/


#include<iostream>
using namespace std;

//Recursive Function
int sum(int n)
{
	
	//Base condition
	if(n==1)
	{
		cout << endl << "Sum of n(1) = 1";
		return (1);
	}
	
	//Recursion - pseudo equation
	cout << endl << "Befor Recursive function print N = "<< n;
	int previous_sum =  sum(n-1);
	cout << endl << "After Recursive function print n = "<< n;
	return (previous_sum + n);

}


///main function
int main()
{
	//Take  input from user
	int n;
	cout << "Enter Number N = ";
	cin >> n;
	
	//Recursive function  - user calll
	cout << endl << "Sum of N number = " << sum(n);
	
	return 0;
}
