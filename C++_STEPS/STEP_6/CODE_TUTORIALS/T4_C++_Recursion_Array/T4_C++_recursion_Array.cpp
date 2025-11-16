//Tutorial 4 : Recursion problems
//Find Array is sorted or not
//Jaydeep Shah (radhey04ec@gmail.com)

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


#include <iostream>>
using namespace std;


//Recursive function for finding given array is sorted or not ?
bool sorted(int data[], int size)
{
	
if(size == 0)
{
	//When only one element inside array it is always sorted
return true;	
}	
bool answer = (data[size] > data[size-1]) && sorted(data-1,size-1);
return answer;
}

int main()
{
	//Store elements in Array
	int n;
	cout << "Number of digits inside Array ? ";
	cin >> n;
	int ARRAY[n];
	
	//Store elements
	cout << endl << "Enter Array digits : " << endl;
	for (int k = 0; k < n; k++)
	{
		cin >> ARRAY[k];
	}
	
	//Find sorted or not
	cout << endl << "Given Array is : "<< sorted(ARRAY,n-1);  //n-1 because of zero indexing
	return 0;
}
