//Application of pair and vector
//Sorting Array as per value and then change the value with related indexes.
//Here array and it's value both are inter related,so during sorting as per value need to store related index also.
//HEre concept of pair and vector is very useful.


#include<iostream>
#include <bits/stdc++.h>   //Required for sorting
#include<vector>

using namespace std;

//-------------------------------------------------------------------------------
//Our own function
bool compare_array_val(pair<int,int>p1,pair<int,int>p2)
{
	return(p1.first < p2.first);
}
//-------------------------------------------------------------------------------


int main()
{
	//-------------------------------------------------------------------------------
	//Fixed Array
	int array[] = {23,17,6,29,11,49};	
	vector< pair<int,int> > v;    //Like 2D array but here every elemnt have significant value with it's pair element
	
	//Store value and index as a pair of vector
	for(int a = 0;a < (sizeof(array) / sizeof(array[0])); a++)
	{
		//make pair is inbuilt function
		v.push_back(make_pair(array[a],a));			//We are storing first value and second index
	}
	cout << endl << "Before sorting : " << endl;
	vector< pair<int , int> > :: iterator it;
	for(it=v.begin();it != v.end(); it++)
	{
		cout << endl << "Element : " << it->first << " Index : " << it->second;
	}
	
	//-------------------------------------------------------------------------------
	
	
	//-------------------------------------------------------------------------------
	//Sort as per value
	sort(v.begin(),v.end(),compare_array_val);
	//-------------------------------------------------------------------------------
	
	
	//-------------------------------------------------------------------------------
	//print array
	//After sorting element and related index
	vector < pair<int,int> > :: iterator itr;
	cout<<endl<<"After sorting : "<<endl;
	for(itr = v.begin();itr != v.end(); itr++)
	{
		cout<< endl << "Element : " << itr->first << " at index : " << itr->second;
	}
	//-------------------------------------------------------------------------------
	
	//-------------------------------------------------------------------------------
	//Interchange with index
	for(itr = v.begin();itr != v.end(); itr++)
	{
		int temp = itr->first;
		itr->first = itr->second;
		itr->second = temp;
	}
	//-------------------------------------------------------------------------------
	
	
	//-------------------------------------------------------------------------------
	cout << endl << "After interchange :"<<endl;
	for(itr = v.begin();itr != v.end(); itr++)
	{
		cout<< endl << "Element : " << itr->first << " at index : " << itr->second;
	}
	//-------------------------------------------------------------------------------
		
	return 0;
}
