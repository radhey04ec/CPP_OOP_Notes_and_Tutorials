//Linear search in C++
//Linear search involves comparing each element in an array with a given key. While this method is straightforward and easy to implement, it can be time-consuming when dealing with larger arrays.
//Created by : Jaydeep Shah (radhey04ec@gmail.com)


#include <iostream>
using namespace std;

//Function for finding key from array
//It will retrun position / index from array if key value is present in Array,otherwise return -1
int find_key(int my_array[],int size,int key_details)
{
	for(int j = 0; j < size; j++)
	{
		if(my_array[j] == key_details)
		{
			return j;
		}
	}
	
	return -1;   //If nothing found
}

int main()
{
	int total_array_elements;
	
	cout << "Enetr How many number you want to store into Array ? : " << endl;
	cin >> total_array_elements;
	
	int array[total_array_elements];  //Create Array
	cout << "Enter array elements : "<< endl;
	for(int k = 0; k < total_array_elements; k++)
	{
		cin >> array[k];			//store elements
	}
	
	
	//Store key (Or value which we want to find from Array)
	int key;
	cout <<endl<<"Enetr Key : " << endl;
	cin >> key;
	
	cout<<endl<<"Result : "<<find_key(array,total_array_elements,key);
	
	
	
	return 0;
}
