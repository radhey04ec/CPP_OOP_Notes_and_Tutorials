//Find Min and Max numbers from given ARRAY.

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
Finding min and max from given array
Example data[1,2,3,4,5]
>>Divide Big problem in smaller case,Instead of searching whole array just consider two element only.
>>find minimum of that two element and store the answer,compare that minimum number answer with third elemnt and so on.
>>Psudo code = compare two element and store minimum number as a answer
>>Operation  = Everytime need to decrease Array size for finding base case
>>Base case  = minimum number is first element if Array size = 1 (knowing result)


*/


#include<iostream>
using namespace std;


//Recursive function - For finding minimum
//Here size in terms of zero indexing
int mini(int data[],int size)
{
	
	//Knowing result - Base case
	if(size == 0)
	{
		return data[0];
	}
	
	int prv_mini = mini(data,size-1);
	//Psudo code - Compare previous min answer with current element
	if(prv_mini > data[size])
	{
		prv_mini = data[size];
	}
	
	//Return value
	return(prv_mini);
}


//Recursive function for finding maximum
//Here size in terms of zero indexing
int maxi(int data[],int size)
{
	
	//Base case
	if(size == 0)
	{
		return data[0];
	}
	
	int prv_max = maxi(data,size-1);
	if(prv_max < data[size])
	{
		//Update the result
		prv_max = data[size];
	}
	return(prv_max);
}

///main function
int main()
{
	
	//Size of Array
	int ARR_SIZE;
	cout << "Enter size of Array = ";
	cin >> ARR_SIZE;
	
	//Store element of Array
	cout<<endl << "Enter elemet of array ";
	int ARRAY[ARR_SIZE];
	for(int k =0;k < ARR_SIZE; k++)
	{
		cin >> ARRAY[k];
	}
	
	
	//Find minimum value
	cout << endl << "Minimum number from given data = " << mini(ARRAY,(ARR_SIZE-1));
	cout << endl << "Maximum number from given data = " << maxi(ARRAY,(ARR_SIZE-1));


	return 0;
}
