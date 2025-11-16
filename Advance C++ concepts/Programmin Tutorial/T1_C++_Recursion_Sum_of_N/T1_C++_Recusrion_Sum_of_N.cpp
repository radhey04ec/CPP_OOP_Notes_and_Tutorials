//Tutorial :1 Recursion : When function call itself, useful to do repeat task
//Jaydeep shah (radhey04ec@gmail.com)

#include<iostream>
using namespace std;


//Function for finding sum of N number
//Recursive function
int SUM_OF_N(int n)
{
	//Base conditon 
	if(n == 0)
	{
		return 0;
	}
	
	int PRV_SUM = SUM_OF_N(n-1);
	return(n + PRV_SUM);
	
	//Or we can write return(n + SUM_OF_N(n-1))
}

int main()
{
	//Eneter last digit
	int n;
	cout << "Last digit of N : ";
	cin >> n;
	cout << endl << "SUM OF UPTO N = " << SUM_OF_N(n);
	return 0;
}
