 //Tutorial 17 : Constructor overload
 //Multiple constructor definition within class, provides more flexiblity for user
 //Created by : Jaydeep Shah (radhey04ec@gmail.com)
 
 #include <iostream>
 using namespace std;
 
//Create Class
class sum 
{ 
private:
	int a;
	int b;
	int c;
	float d;
	double e; 
	
public:
	//Constructor - Default type - No Argument
    sum()
{
//Take the value from user
cout<<" Enter a " << endl;
cin>>a;
cout<< "Enter b " << endl; 
cin>>b; 
cout<< "Sum = " << (a+b) << endl;
}

//Constructor when user pass value of a and b
sum(int a,int b);

//Constructor when user will pass value of a and d and c
sum(int a, float d,double c);

};


//--------------------------------------------------
//Constructor overloading 
//Constructor function definition
sum :: sum(int x,int y)
{
a=x;
b=y;
cout<< endl << "Sum as per passed value = " << (a+b) << endl;

}

//Constructor function definition
sum :: sum(int p, float q ,double r)
{
a=p; 
d=q; 
e=r;
cout << "Value of a,d,e set sucessfully.." << endl;
} 
//--------------------------------------------------

int main( )
{

//Create Obj
sum First_Obj;							//Default constructor call

sum Second_Obj(20,50);					//Constructor overload - Implicit call

sum Third_Obj = sum(3,3.2,4.55);        //Other way of calling constructor - explicit call

return 0;
}

