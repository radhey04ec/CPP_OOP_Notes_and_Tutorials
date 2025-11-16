//Tutorial #2 - Message passing in C++
//Message passing - Communication between objects belonging of different classes.
//Jaydeep Shah -Email: radhey04ec@gmail.com

#include <iostream>
using namespace std;


//Create one class
class Customer
{
public:
    void Update_Order_History()
    {
        cout << "Order history updated - done " << endl;
    }
};

//Create other class
class Order
{
public :
    void Send_Msg_to_Customer_Class(Customer* temp)
    {
        temp->Update_Order_History();
    }
};

int main()
{
    //Create object from Customer class
    Customer cust;

    //Create object of other class
    Order ord;

    //Requesting invoke of Customer method from Order class object
    ord.Send_Msg_to_Customer_Class(&cust);
}


