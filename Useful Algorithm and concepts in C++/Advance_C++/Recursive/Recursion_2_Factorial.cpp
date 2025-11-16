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
SUM OF n NUMBER (n!)= n * (n-1) * (n-2) *....*2 * 1;  
Example : 4! = 4 * 3 * 2 * 1  = Factorial(3) * 4
GENRAL CASE (PSUDO CODE) Fact(N)  = Fact(N-1) * N
Base condition = fact(1) = 1
*/


#include<iostream>
using namespace std;

//Recursive Function
int fact(int n)
{
	
	//Base condition
	if(n==1)
	{
		cout << endl << "Factorial of n(1)! = 1";
		return (1);
	}
	
	//Recursion - pseudo equation
	cout << endl << "Befor Recursive function print N = "<< n;
	int previous_fact = n * fact(n-1);
	cout << endl << "After Recursive function print n = "<< n;
	return (previous_fact);

}


///main function
int main()
{
	//Take  input from user
	int n;
	cout << "Enter Number N != ";
	cin >> n;
	
	//Recursive function  - user calll
	cout << endl << "Factorial of N number = " << fact(n);
	
	return 0;
}
