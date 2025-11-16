//Binary search algorithm
//Here we have assumed that the array is already sorted in ascending order.
//Jaydeep Shah (radhey04ec@gmail.com)


#include<iostream>
using namespace std;


//Binary search algorithm function
/*
1)Find middle point of the Array,Initially start point = 0, end_point = size of array - 1
2)If middle poit is greater than key,  end point = middle_point - 1
3)If middle poit is less than key,  start point = middle_point + 1
4)If middle point == key, return middle point position
5)If no data found return -1
*/
int binary_search(int data[],int array_size,int key)
{
	int middle_pos = 0;
	int start_pos  = 0;
	int end_pos    = array_size - 1;
	
	while(start_pos <= end_pos)     //OR (end_pos > start_pos)
	{
		middle_pos = (start_pos + end_pos) / 2;
		
		if(data[middle_pos] == key)
		{
			return(middle_pos);
		}
		else if(data[middle_pos] > key)
		{
			end_pos = middle_pos - 1;
		}
		else
		{
			start_pos = middle_pos + 1;
		}
	}
	
	//No data found
	return -1;
}

int main()
{
	
	//User input for total elements of Array
	int size_of_array;
	cout << "How many elements you want to store inside array ? :"<< endl;
	cin >> size_of_array;
	
	//Store element of array
	int ARRAY_DATA[size_of_array];                        //Create Array for storing details of elements
	cout << endl << "Please eneter elements (Ascending order) : "<< endl;
	for(int  m = 0; m < size_of_array; m++)
	{
		cin >> ARRAY_DATA[m];
	}
	
	//Key elemnt details
	int my_key = 0;
	cout << endl << "Please eneter key number : "<< endl;
	cin >> my_key;
	
	//Function call
	cout << endl << "Result (0th index system)= " << binary_search(ARRAY_DATA,size_of_array,my_key);
	
	
	return 0;
}
