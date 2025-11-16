//Addition of n number using Recursion
/*
---------------------------------------------------------------------------------------------------
Basic Notes:
1) Find basic small input and use it as a base case
2) Find Repeat pattern for solving problem, and link it with Recusrive function, findout condition which we use during each recursive call
3) Thing above from Recursive function call will run in ascending order untill base condition acheive
4) Base condition will run only for single time
5) Thing below from Recursive function call will be run in descending order.
---------------------------------------------------------------------------------------------------
*/



/*
Finding number of occurance of specific element (KEY) in given array
Example data[1 2 3 2 5 2], key = 2, So occurance of key number = 3 times

>>Divide Big problem in smaller - test case
1) Compare last nth digit with key, if key == last nth digit , Occurance++ or we can say update (n-1) result
2) Base case - if only one element in Array and if match with key, occurance = 1 else occurance = 0 


*/


#include<iostream>
#include<algorithm>
using namespace std;


//Recursive function - For finding Occurance of key number
int occurance(int data[],int size,int key)
{
	
	//Base case 
	if(size == 0)
	{
		if(data[0] == key)
		{
			return 1;
		}
		else
		{
			return 0;
		}
		
	}
	
	//Store last occurance
	int prv_occurance = occurance(data,size-1,key);
	if(data[size] == key)
	{
		prv_occurance++;
	}
	return(prv_occurance);
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
	
	//Store key element
	int key;
	cout << endl <<"Enetr key number = ";
	cin >> key;
	
	//Recursive call
	cout<< endl << "Number of occurance = " << occurance(ARRAY,ARR_SIZE-1,key);


	return 0;
}
