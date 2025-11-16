//Linked list - Every node contains value + Location of the next node 
//Easy to ADD / Remove element not rigid fix size structre like Array.
//Linked list is user define datatype,need to necessary class and method for operations.
//Jaydeep Shah


#include<iostream>
using namespace std;

//Create class "NODE" for storing value + ADD of next node
class NODE
{
	public:
		int     data;	//value of data
		NODE*  next;   //ADDRESS of next node
		
	//make constructor so during creating node object we can assign value and address of next node.
	NODE(int value)
	{
		data = value;
		next = NULL;	//initially null pointer act as last element of list
	}
	
};


//------------------------------------------------------------
//Create method/function for updating linked list
//Two Parameter as a argument required: 1)Value 2)Head Node
void insert_at_tail(NODE* &head,int value)
{
	//1]
	//Create temp node for storing argument value 
	//This node need to place on Heap,otherwise memory will be erase after complition of function call
	NODE* temp = new NODE(value);  //We have temp node with user value
	
	//2]
	//If no any list created in past and passed element is first one
	if(head == NULL)
	{
		head = temp;
		return;
	}
	
	//3]
	//Make local variable for furthe process
	NODE *test = head;
	
	//4] Finding last element inside list
	while(test->next != NULL)
	{
		test = test->next;  //Iterator
	}
	
	//5]Link list
	test->next = temp;
	
	cout << endl << "Sucessfully element added in tail";
}
//------------------------------------------------------------



//------------------------------------------------------------
//For printing linked list
void print_link(NODE *p)
{
  NODE *temp = p;
  cout<< endl << "List print : ";
  while(temp->next != NULL)
  {
  	//PRINT current element
  	cout << temp->data << " , ";
  	//Update for next node
  	temp = temp->next;

  }
}
//------------------------------------------------------------




int main()
{
	//Create null pointer act as HEAD
	NODE *user = NULL;
	
	//Insert value in list
	insert_at_tail(user,1);
	insert_at_tail(user,2);
	insert_at_tail(user,3);
	insert_at_tail(user,4);
	insert_at_tail(user,5);
	
	//print list
	print_link(user);
	
	return 0;
}
