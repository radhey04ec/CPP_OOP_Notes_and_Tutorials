//File operation in C++  
//Like <iostream> , here <fstream> lib required for file operations.
//3 - Important operations related with File 1)Create file 2)Write Data 3)Read data
//3 - Class available for doing above mentioned operations
//1)ofsream - Create file + Write 2)ifstream - Read data from file 3)fstream - READ + WRITE (Prefered ofstream and ifstream)
//Jaydeep Shah -  radhey04ec@gmail.com


#include<iostream>
#include<fstream>		//Including file library
#include<string.h>


using namespace std;


int main()
{
	cout << "Create File with name test.txt "<<endl;
	//Create file and create object also (Every time create file,if already existing file is there it will be clear)
	ofstream myfile("test.txt");           //myfile is object, "test" is name of file
	
	//First line  
	myfile.write("This string is written into file using C++ code",strlen("This string is written into file using C++ code"));

	//Second line  --WAY2 of writing
	myfile << endl<<"This is second line written into file using code";
	myfile.close();   //After complition of writing operation need to close the file
	
	//Note : Before starting read operatoion of file,need to close it first
	
	//Read data from file
	string data;
	fstream read_file("test.txt");       //Create object from fstream or ifstream class for reading data from file
	
	//---------------------------------------------------------------
	cout << endl << "Read data from file..."<<endl;
	
	while(getline(read_file,data))
	{
	    
		cout << data;  //print file data
		cout<<endl;
		
	}
	cout << endl << "Read data complete" << endl;
	//----------------------------------------------------------------
	//Close the file
	read_file.close(); //Good practice to close the file for saving resources like RAM.
	
	cout<<endl<<"File close";
	
	return 0;
}
