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
Fibonaaci series = 1,1,2,3,5,8,....
Genral case = Fibonnaci number of (n) = (n-1) + (n-2) = Sum of previous two number
Base case First fibonaaci number = 1

*/


#include<iostream>
using namespace std;

//Recursive Function
int fibonacci(int n)
{
	//Two time recursive function call
	//Base condition
	if(n==1)
	{
		cout << endl << "Fibonacci of n(1) = 1";
		return (1);
	}
	//Second base condition 
	//This will happen when n=1 and fibonacci(n-2) become fibonacci(-1)
	if(n < 1)
	{
		return (0);
	}
	
	//Recursion - pseudo equation
	cout << endl << "Befor Recursive function print N = "<< n;
	int previous_fibonacci = fibonacci(n-1) + fibonacci(n-2);
	cout << endl << "After Recursive function print n = "<< n;
	return (previous_fibonacci);

}


///main function
int main()
{
	//Take  input from user
	int n;
	cout << "Enter Number Fibonacci index N= ";
	cin >> n;
	
	//Recursive function  - user calll
	cout << endl << "Fibonacci number of given index is  = " << fibonacci(n);
	
	return 0;
}
