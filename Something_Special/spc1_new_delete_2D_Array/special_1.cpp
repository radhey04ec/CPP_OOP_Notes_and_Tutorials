//Something special #1
//Jaydeep Shah


#include<iostream>
using namespace std;

int main()
{
	//Create array to store ten different integer Address 
	int *ADD[10]; 
	for(int a =0; a < 10; a++)
	{
		ADD[a] = new int[20];   //Allocate 20 bytes of Heap and starting address stored into Array
	}
	
	//Store data into allocated memory
	for(int j =0; j<10; j++)      //First "for" loop for Array's element -> Here it is first element Address of Heap memory chunk
	{
		for(int k=0; k<20;k++)   //Second "for" loop for travels to entire chunk
		{  
			ADD[j][k] = j + k;
		}
	}
	
	//Print data 
	for(int j =0; j<10; j++)      //First "for" loop for Array's element -> Here it is first element Address of Heap memory chunk
	{
		for(int k=0; k<20;k++)   //Second "for" loop for travels to entire chunk
		{  
			cout << " , " << ADD[j][k];
		}
		cout << endl;
	}
	
	//Delete allocated memory
		for(int a =0; a < 10; a++)
	{
		delete[] ADD[a];
		ADD[a] = NULL;   		//This is important to avoid any dangerous situation
	}
	
		
	//Print data 
	//Below for loop will not execute or print any data
	for(int j =0; j<10; j++)      //First "for" loop for Array's element -> Here it is first element Address of Heap memory chunk
	{
		for(int k=0; k<20;k++)   //Second "for" loop for travels to entire chunk
		{  
			cout << " , " << ADD[j][k];
		}
		cout << endl;
	}
	
	return 0;
}
