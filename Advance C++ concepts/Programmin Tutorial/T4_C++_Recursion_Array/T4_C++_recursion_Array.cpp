//Tutorial 4 : Recursion problems
//Find Array is sorted or not
//Jaydeep Shah (radhey04ec@gmail.com)


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
