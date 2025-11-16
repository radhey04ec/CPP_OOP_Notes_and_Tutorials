//Tutorial 5 : Recursion problems
//Find first and lat occurance of given key element inside array
//Jaydeep Shah (radhey04ec@gmail.com)


#include<iostream>>
using namespace std;

//Function for finding first occurance of the key element inside ARRAY
int FirstOCC(int data[],int size, int key, int index)
{
	//If element not found from whole Array
	if(index >= size)
	{
		return (-1);
	}
	if(data[index] == key)
	{
		return index;
	}
	return(FirstOCC(data,size,key,index+1));
}

//Finding last occurance 
int LastOCC(int data[],int size,int key,int index)
{
	//Base condition
	if(index == 0)
	{
		return (-1);
	}
	if(data[index] == key)
	{
		return index;
	}
	return(LastOCC(data,size,key,index-1));
	
}
int main()
{
	//Store elements in Array
	int n;
	cout << "Number of digits inside Array ? ";
	cin >> n;
	int ARRAY[n];
	
	//Enter Array digits
	cout << endl << "Enter Array digits : " << endl;
	for (int k = 0; k < n; k++)
	{
		cin >> ARRAY[k];
	}
	
	//Key number input
	cout << endl << "Key number = " << endl;
	int key;
	cin >> key;
	
	//Print Fist and last occurance
	int first_occurance = FirstOCC(ARRAY,n,key,0);
	int last_occurance  = LastOCC(ARRAY,n,key,n);
	cout << endl << "First Occurance = " << first_occurance << " Last Occurance = " << last_occurance;
	return 0;
}
