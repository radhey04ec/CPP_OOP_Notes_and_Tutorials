//Mouse in cage

#include <iostream>
using namespace std;

void draw(int size)
{
	
//Clear space for top two lines
cout << endl << endl;

//Pixel consideration
int row_size = 10 * size;
int col_size = 10 * size;

//Row
for(int k =0; k <= row_size; k++)
{

for(int m =0; m <= col_size; m++)
{
//col 
if((k==0) || (k == row_size) || (k%10 == 0))
{
	cout << "-";
}
else
{
if((m==0) || (m == col_size) || (m%10 == 0))
{
	cout << "|";
}
else
{
	cout << " ";
}
}
}
//New line after each end
cout << endl;
}
}
int main()
{
	//Size of cage
	int cage_size = 0;
	cout << "Enter size of cage N X N (max 7)"<<endl;
	cin >> cage_size;
	
	draw(cage_size);
	
	return 0;
}
