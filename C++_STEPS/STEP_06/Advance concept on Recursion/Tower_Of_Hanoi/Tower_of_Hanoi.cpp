//RECURSION - ADVANCE CONCEPT
//TOWER OF HANOI - JAYDEEP SHAH (radhey04ec@gmail.com)
// 1 = Minimum size of ring, 3 =  Last  Big size Ring

/*Idea behind printing:
Thing / Logic after Recursive call RUN in Ascending order.
Thing / Logic before Recursive call RUN in descending order.
*/

#include<iostream>
using namespace std;


//Recursive function
void Tower_of_Hanoi(int n,char Source,char Dest,char Aux)
{
	
	//Base condition - When no ring at Source POLE
	if(n == 0)
	{
		return;
	}

	Tower_of_Hanoi(n-1,Source,Aux,Dest);
	cout << endl << "Move N = " << n << " From " << Source << " To " << Dest;
	Tower_of_Hanoi(n-1,Aux,Dest,Source);
	
 

	
}

int main()
{
	//I consider 3 rings here.
	Tower_of_Hanoi(3,'A','C','B');
	return 0;
}


/*
Other way for solving problem as per attached text note: 
void Tower_of_Hanoi(int disk,char Source,char Dest,char Aux)
{
	
	//Base case
	if(disk == 1)
	{
		cout << endl << "Move Smallest Disk from " << Source << " to " << Dest;
		return;
	}
	
	Tower_of_Hanoi(disk-1,Source,Aux,Dest);
	cout << endl << "Move n =" << disk << " From "<< Source << " to " << Dest;
	Tower_of_Hanoi(disk-1,Aux,Dest,Source);
	
}
*/
