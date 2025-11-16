//Tutorial :1 Recursion : When function call itself, useful to do process which contains repeatative task.
//Jaydeep shah (radhey04ec@gmail.com)

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


//Function for finding sum of N number
//Recursive function
int SUM_OF_N(int n)
{
	//Base conditon 
	if(n == 0)
	{
		return 0;
	}
	
	int PRV_SUM = SUM_OF_N(n-1);
	return(n + PRV_SUM);
	
	//Or we can write return(n + SUM_OF_N(n-1))
}

int main()
{
	//Eneter last digit
	int n;
	cout << "Last digit of N : ";
	cin >> n;
	cout << endl << "SUM OF UPTO N = " << SUM_OF_N(n);
	return 0;
}
