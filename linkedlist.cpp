#include<iostream>
using namespace std;
struct nod
{
int data;
nod *next;	
};
typedef struct nod *node;
class list 
{
	private:
		node head,tail;
	public:
		list()
		{
			head = NULL;
			tail = NULL;
		}
	void insert(int d)
	{
		node t = new nod;
		t->data = d;
		if(head == NULL)
		{
			head = t;
			tail = t;
			t=NULL;
		}
		else
		{
			tail->next = t;
			tail = t;
			tail->next =NULL;
		}
	}
	void display()
	{
		node t = new nod;
		t = head;
		while(t != NULL)
		{
			cout<<t->data<<'\t';
			t = t->next;
		} 
		cout<<'\n';
	}
};
int main()
{
	list a;
	int b,c;
	while (true)
	{
		cout<<"\nEnter the number to be inserted:";
		cin>>b;
		a.insert(b);
		cout<<"\nPress 1 to continue and 0 to exit : \n";
		cin>>c;
		if(c == 0)
		break;
	}
	a.display();
	return 0;
	
	
}
