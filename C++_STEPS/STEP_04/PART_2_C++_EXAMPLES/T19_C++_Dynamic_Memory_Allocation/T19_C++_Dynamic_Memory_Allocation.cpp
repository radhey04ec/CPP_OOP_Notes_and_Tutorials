 //Tutorial 19: Dynamic memory allocation in C++
 // new() for allocate memory, delete() for de allocate memory from Heap
 //Created by : Jaydeep Shah (radhey04ec@gmail.com)
 
 #include <iostream>
 using namespace std;
 
 
 int main()
 {
 	//new() operator 
 	int *point = new int();
 	cout << "Address of Memory allocated by new = " << point << "With value = " << *point;
 	*point = 10;
 	cout << endl << "New value at that location = " << *point;
 	
 	//Pass initial value
 	int *point1 = new int(32);
 	cout << endl <<"Address of Memory allocated by new = " << point1 << "With value = " << *point1 << endl;

 	
 	//Array memory allocation on Heap
 	int *point_of_array = new int[10];  //10 bytes allocation on heap
 	cout<< endl << "Address allocation by new to Array = " << point_of_array << " With value : "<<endl;
 	for(int i = 0; i <= 9; i++)
 	{
 		cout << point_of_array[i] << endl;
	}
	
	//To avoid dangling need to delete this allocated memory
	delete(point);
	delete[] point_of_array;
	point = NULL;
	point_of_array =NULL;
 	
 	return 0;
 }
