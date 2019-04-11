#include<iostream>
using namespace std;
struct node
{
int data;
node *next;	
};
class list 
{
	private:
		node *head,*tail;
	public:
		list()
		{
			head = NULL;
			tail = NULL;
		}
	void insert(int data)
	{
		node *temp;
		temp->data;
		if(head == NULL)
		{
			head = temp;
			tail = temp;
		}
		else
		{
			tail->next = temp;
			tail = temp;
		}
	}
};
int main()
{
	list a;
	
	return 0;
	
	
}
