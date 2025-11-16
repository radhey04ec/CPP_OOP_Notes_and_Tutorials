//Array sorting (Ascending / Descending) Algorithm
//Jaydeep Shah - radhey04ec@gmail.com


#include <iostream>
using namespace std;


//Function for sorting the Array
//--------------------------------------------
//Algorithm flow
//Initially start location = oth pos, Find minimum number from start location to last element and swap it with start location
//Start location ++
//Repeat untill start location become your array size
//--------------------------------------------
void array_sort(int *data,int size)
{
	//First for loop : Start location update with each itteration
	for(int i = 0; i < size; i++)
	{
		//Find Minimum value from start to last location of array
		for(int j = i; j < size; j++)
		{
			//Compare with start location if value is minimum then swap
			if(data[j] < data[i])        //For Descending condition is data[i] < data[j]
			{
				//Two varaible swapping
				int swap = data[i];
				data[i]  = data[j];
				data[j]  = swap;
			}
			
		}
	}
	
} 

int main()
{
	//Total elements inside Array ??
	int array_size = 0;
	cout << "Please provides number of elements inside array : " << endl;
	cin >> array_size;
	
	//Create Array of given size
	int our_array[array_size];
	cout << "Enter element details : " << endl;
	for(int k =0; k < array_size; k++)
	{
		cin >> our_array[k];
	}
	
	//Array sorting function call
	array_sort(our_array,array_size);
	
	//print data
	cout << endl << "After sorting : " << endl;
    for(int k =0; k < array_size; k++)
	{
		cout << our_array[k] << " , ";
	}
		
	return 0;
}
