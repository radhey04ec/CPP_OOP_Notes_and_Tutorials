//Addition of n number using Recursion
/*
---------------------------------------------------------------------------------------------------
Basic Notes:
1) Find basic small input and use it as a base case
2) Find Repeat pattern for solving problem, and link it with Recusrive function, findout condition which we use during each recursive call
3) Thing above from Recursive function call will run in ascending order untill base condition acheive
4) Base condition will run only for single time
5) Thing below from Recursive function call will be run in descending order.
---------------------------------------------------------------------------------------------------
*/



/*
MAZE - Two possible movement 1) Move to Right (Increase to next column digit) 2)Move to Down (Increase next Row digit)
Psudo code step = 
1) Find last real time R,C location
2) If Move to right possible update location
3) If move to right step is not possible, move to bottom

//Base case
>> if 1D array with one elemnt - return same R,C as a live location

*/


#include<iostream>
#include<algorithm>
using namespace std;


//Recursive function - for finding path
void maze(int *data,int R,int C)
{
	//BASE CASE - is it locate single R X C
	if(R <= 0)
	{
		//1D Array
		if(C <= 0)
		{
		cout << " 1 ";
		return;
		}
		return;
	}
	if(C <= 0)
	{ return;
	}

	cout << endl << "R = " << R << " C = " << C;
	maze(data,R,C-1);
	if(*(data + R + C) == 1)
	{
		cout << " 1 ";
	}
	else
	{
		cout << endl;
		R -= 1;
		cout << endl << "R = " << R << " C = " << C;
		maze(data,R,C-1);
		cout << endl << "R = " << R << " C = " << C;
		
	}
		
}

///main function
int main()
{
	
	//Size of Array
	int R,C;
	cout << "Enter size of R = ";
	cin >> R;
	cout << endl << "Enter size of C = ";
	cin >> C;
	
	int ARRAY[R][C];
	//Store Array entry
	cout<<endl<<"Enter Array elements "<<endl;
	for(int a = 0; a < R; a++)
	{
		for(int b = 0; b < C; b++)
		{
			cin >> ARRAY[a][b];
		}
		
	}

	maze((int *)ARRAY,R-1,C-1);
	return 0;
}
