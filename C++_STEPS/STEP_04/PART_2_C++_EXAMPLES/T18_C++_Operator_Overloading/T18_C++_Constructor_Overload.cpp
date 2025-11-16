 //Tutorial 18 : Operator overloading. (Polymorphism)
 //Operator overloading is same like function declaration an definition. It has return type and argument with operator keyword.
 //Created by : Jaydeep Shah (radhey04ec@gmail.com)
 
 #include <iostream>
 using namespace std;
 
//Create complex class
class complex
{
		public:	
		double real;	//Variable related with object
		double imz;
	

		//Constructor
		complex()
		{
			real = 0;
			imz  = 0;
		}
		
		//Member function
		void set(double a,double b)
		{
			real = a;
			imz = b;
			cout << endl << "Set sucessfully with real = " << real << ", Imz ="<< imz;
			
		}
		
		//Operator overloading
		complex operator+(complex const &obj)   //"+" Operator overloading
		{
			complex data;
			
			//For knowing what is happening during call of operator
			cout << endl << "Operator overload Argument  = "<<obj.real << " , " << obj.imz;
			cout << endl << "This function called by = " <<real  << " , "<< imz;
			
			// "+" use of as a operator overloading
			data.real  = real + obj.real;
			data.imz   = imz  + obj.imz;
			
			
			return(data);
		}
		
	
};



int main()
{
	//Create first object and set value
	complex C1;
	C1.set(3,7);
	
	//Create second object and set value
	complex C2;
	C2.set(4,11);
	
	//Operator overload call
	complex C3 = C1 + C2;   //"+" called when Both object is complex type
	//Print value
	cout << endl << "Addition by using operator overload = "<< C3.real << " , " << C3.imz;
	
	//Normal "+" operator
	cout << endl << "Normal + operator use = 7 + 10 :  " << (7 + 10);
	
	return 0;
}
