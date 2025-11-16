//Pair in C++
//In the realm of C++, the concept of "pair" proves to be useful when there is a relationship between two values that may belong to different data types. 
//To illustrate, imagine having two buckets, one filled with fruits and vegetables, and the other containing MRP prices per kilogram. 
//In order to establish a connection between these buckets for future utilization, the "pair" concept in C++ comes into play.

/*
¦¦¦¦   ¦¦¦  ¦¦¦¦¦ ¦¦¦¦  
¦   ¦ ¦   ¦   ¦   ¦   ¦ 
¦¦¦¦  ¦¦¦¦¦   ¦   ¦¦¦¦  
¦     ¦   ¦   ¦   ¦   ¦ 
¦     ¦   ¦ ¦¦¦¦¦ ¦   ¦ 

Jaydeep Shah
*/

#include<iostream>
using namespace std;


int main()
{
	//SYNTAX:
	//pair <data_type1, data_type2> Pair_name (value1, value2) ;
	
	
	//------------------------------------------------------------
	//Create pair of same type
	pair<int,int> p;
	
	//Assign value of first and second element
	p.first  	= 10;
	p.second 	= 20;
	//print out that value
	cout<< "Pair value of p = "<<p.first<<" and "<<p.second<<endl;
	//------------------------------------------------------------
	
	//------------------------------------------------------------
	//Create pair of different type
	pair<char,int> p1;
	p1.first = 'A';
	p1.second = 1;
	cout<< "Pair value p1 = "<<p1.first<<" and "<<p1.second<<endl;
	//------------------------------------------------------------
	
	//------------------------------------------------------------
	//Assign value during declaration time
	pair<float,string> p3(3.14,"Pi");
	cout<< "Pair value p3 = "<<p3.first<<" and "<<p3.second<<endl;
	//------------------------------------------------------------
	
	
	return 0;
}
