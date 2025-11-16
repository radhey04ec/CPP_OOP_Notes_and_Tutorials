 //Tutorial 16: Constructor & Destructor in C++
 //Member function of class an declared in public section, name of constructor always same as class name.
 //Created by : Jaydeep Shah (radhey04ec@gmail.com)
 
 #include <iostream>
 using namespace std;
 
 
 //Create class
 class bank
 {
 	public:
 		int   BANK_BALANCE;
 		float INTR_RATE;
 		
 		//Constructor -Default constructor without any argument - Constructor has no return type
 		bank()
 		{
 			cout <<  endl << "User Account created with zero balance and INTR_RATE = 4.2%" << endl;
 			BANK_BALANCE = 0;
 			INTR_RATE    = 4.2;
		}
 	
 };
 
 //Create other class
 class RECHARGE_PLAN
 {
 	public:
 		int RECHARGE_AMOUNT;
 		int CHANNEL_SUBSCRIPTION;
 		
 		//Create Paarmeterized constructor
 		RECHARGE_PLAN(int REC_AMOUNT,int CHANNEL)
 		{
 			RECHARGE_AMOUNT 	 = REC_AMOUNT;
 			CHANNEL_SUBSCRIPTION = CHANNEL;
 			cout << endl << "User created with Recharge amount = " << RECHARGE_AMOUNT << " , Channel list = " << CHANNEL_SUBSCRIPTION << endl;
 			
		}
 		
 	
 };
 
 int main()
 {
 	
 	//Create object
 	bank USER_1;					 //Object -- Default constructor type
 	
 	RECHARGE_PLAN USER_A(100,10);    //Object with constructor values

 	return 0;
 }
