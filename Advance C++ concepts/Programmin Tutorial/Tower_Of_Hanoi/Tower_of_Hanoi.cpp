//RECURSION - ADVANCE CONCEPT
//TOWER OF HANOI - JAYDEEP SHAH (radhey04ec@gmail.com)


#include<iostream>
using namespace std;


//Recursive function
void Tower_of_Hanoi(int n,char Source,char Dest,char Aux)
{
	
	//Base condition
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
	Tower_of_Hanoi(3,'A','C','B');
	return 0;
}
