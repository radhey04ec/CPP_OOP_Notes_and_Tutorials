//Mouse in cage - Recursion

#include <iostream>
using namespace std;


//---------------------------------------------------------
//draw cage as per user input
void draw(int size, int* cage_data)
{
	
//Clear space for top two lines
cout << endl << endl;

//Zooming for better view on Terminal
int row_size     = 2 * size;     
int col_size     = 15 * size;

//Row
for(int k =0; k <= row_size; k++)
{

//col
for(int m =0; m <= col_size; m++)
{
 
//Draw Boundry line

//First and Last row
if((k==0) || (k == row_size) || (k%2 == 0))
{
	cout << "-";
}

//First and last column
else if((m==0) || (m == col_size) || (m%15 == 0))
{
	cout << "|";
}

//Normal space
else
{
	cout << " ";
}

}
\
//----------------------
//At the end of final column - Write user's Cage value
cout << "   ";
for(int x =0; x < size; x++)
{
	if((k % 2 == 0) && (k != row_size))
	{
	int temp = k /2;
	cout << *(cage_data + (temp*size) + x) << " , ";
    }
}
//----------------------

//New line after each end
cout << endl;
}
} //Draw function end here
//----------------------


//----------------------
/*
Movement inside cage only possible if
1)X and Y is within Range of given Cage size
2)And Path is not block
>> Create function to know is it valid or to move or not
*/

bool is_safe(int size,int x, int y,int* cage_detail)
{
	
	if((x <= (size-1)) && (y <= size-1) && (*(cage_detail + (y * size) + x) == 1))
	{
		return 1;
	}
	else
	{
		return 0;
	}
	
}
//----------------------


//----------------------
//Recursive Function for find exit path from Maze
bool maze(int size,int x,int y, int *cage_data, int *sol_data)
{
    //Base condition last block of maze
	if((x == (size - 1)) && (y == size - 1))
	{
		*(sol_data + (y*size) + x) = 1;
		cout << endl << endl << "****\n\nMaze exit found\n\n****"<<endl;
		return true;
	}
	
	
	if(is_safe(size,x,y,cage_data))
	{
		//Set solution '1'
		*(sol_data + x + (y * size)) = 1;
		
		//Move Right side
		x = x + 1;
		if(maze(size,x,y, cage_data,sol_data))
		{
		return true;	
		}
		
		x =  x - 1;
		//Move Down side
		y =  y + 1;
		if(maze(size,x,y, cage_data,sol_data))
		{
		return true;	
		}
		
		y =  y - 1;
		//Otherwise solution not found
		*(sol_data + x + (y * size)) = 0;
		
		return false;
	}
	
	return false;
	
}
//----------------------



int main()
{
	//Size of cage
	int cage_size = 0;
	cout << "Enter size of cage N X N (max 7)"<<endl;
	cin >> cage_size;
	
	//Create Array with User value
	cout << "Enter value of Array - 1 = Path open , 0 = Path Block"<<endl;
	int cage[cage_size][cage_size];
	
	//For store solution for given cage
	int sol[cage_size][cage_size];
	
    for(int cage_entry = 0; cage_entry < cage_size; cage_entry++)
    {
    	for(int cage_entry_1 = 0; cage_entry_1 < cage_size; cage_entry_1++)
    	{
    		cin >> cage[cage_entry][cage_entry_1];
    		
    		//Reset solution
    		sol[cage_entry][cage_entry_1] = 0;
		}
		cout << endl;
	}
	
	//Draw Cage - Pass size and 2D Array
	draw(cage_size,(int *)cage);
	
	//Find path
	maze(cage_size,0,0,(int *)cage,(int *)sol);
	
	cout << "\n \n solution \n";
	
	for(int cage_entry = 0; cage_entry < cage_size; cage_entry++)
    {
    	for(int cage_entry_1 = 0; cage_entry_1 < cage_size; cage_entry_1++)
    	{
    		
    		
    		cout << sol[cage_entry][cage_entry_1];
		}
		cout << endl;
	}

	
	
	return 0;
}
