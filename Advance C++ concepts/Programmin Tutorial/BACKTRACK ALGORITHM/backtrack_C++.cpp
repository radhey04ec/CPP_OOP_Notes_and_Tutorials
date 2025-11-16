//Backtrack algorithm (Mouse in maze)


#include<iostream>
using namespace std;



//Function to know is this block is safe for movement
bool is_safe(int *data,int x,int y, int n)
{
	// data = maze array, x & y location live, n = dimension of maze
	if((x < n) && (y < n) && (*(data + (x*n) + y) == 1)) 
	{
		
		return true;
		
	}
	else
	{
	
		return false;
	}
}


//Recursive function
bool maze(int *data,int x,int y, int n, int *solution)
{
	//Base condition last block of maze
	if((x == (n-1)) && (y == n-1))
	{
		*(solution + (x*n) + y) = 1;
		cout << endl << "Maze exit found "<<endl;
		return true;
	}
	
	
	if(is_safe(data,x,y,n))
	{
		//Further movement is possible
		*(solution + (x*n) + y) = 1;
		
		//Next step move down
		if(maze(data,x+1,y,n,solution))
		{
			return true;
		}
		if(maze(data,x,y+1,n,solution))
		{
			return true;
		}
		
		//Backtrack
		*(solution + (x*n) +y) = 0;
		return false;
	}

		return false;
	
	
}


int main()
{
	//Enter Square matrix dimension
	int n;
	cout << "Enter N x N dimension of maze = ";
	cin >> n;
	
	//Create 2D array for representing maze
	int maze_array[n][n];
	cout << endl <<"Enter Elements of maze " << endl;
	for(int a = 0; a < n; a++)
	{
		//Row entry
		for(int b =0;b < n; b++)
		{
			//column entry
			cin>>maze_array[a][b];
			
		}
		//cout << endl;
	}
	
	//Create solution array for storing solution of maze
	int sol[n][n];	//Same dimension
	//set as default value 0
	for(int a = 0; a < n; a++)
	{
		//Row entry
		for(int b =0;b < n; b++)
		{
			//column entry
			sol[a][b] = 0;
			
		}
	}
	
	
	
	maze((int*)maze_array,0,0,n,(int*)sol);

	//Print our soultion
	cout << endl << endl << "Our solution is : ";
		for(int a = 0; a < n; a++)
	{
		//Row entry
		for(int b =0;b < n; b++)
		{
			//column entry
			cout << sol[a][b];
			
		}
		cout << endl;
	}
	
	return 0;
}
