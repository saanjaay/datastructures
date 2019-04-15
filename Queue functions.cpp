#include<iostream>
using namespace std;
struct nod
{
	int data;
	struct nod *next;
};
typedef struct nod *node;
class queue
{
	private:
		node head = new nod;
		node tail = new nod;
	public:
		queue()
		{
			head = NULL;
			tail = NULL;
		}
		void push(int info)
		{
			node temp = new nod;
			temp->data = info;
			if(head == NULL)
			head = tail = temp;
			else
			{
				tail->next = temp;
				tail = temp;
				tail->next =NULL;
			}
		}
		void pop()
	 	{
	 		head = head->next;
		}
		void display()
		{
			node tem= new nod;
			tem = head;
			while(tem->next != NULL)
			{
				cout<<tem->data<<"\t";
				tem = tem->next;
			}
			cout<<tem->data<<"\n";
		}
};
int main() 
{
	queue obj;
	bool a= true;
	while (a == true)
	{
		cout<<"1.push\n2.pop\n3.display\n4.exit\n";
		int a;
		cin>>a;
		switch(a)
		{
			case 1:
				cout<<"\nEnter val:\n";
				int b;
				cin>>b;
				obj.push(b);
				break;
			case 2:
				obj.pop();
				break;
			case 3:
				obj.display();
				break;
			case 4:
				break;
			default :
				cout<<"\nYou have entered Wrong Option\n";
		}
		if (a == 4)
		break;
}
}
