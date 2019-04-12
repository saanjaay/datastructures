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
			t->next=NULL;
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
	void insert_after(int a,int val)
	{
		if(head != NULL)
		{
		node t = new nod;
		t->data = val;
		node pre = new nod;
		node aft = new nod;
		pre = aft = head;
		while(pre->data != a)
	{
			pre = pre->next;
			aft = pre;
	}
	    aft = pre->next;
		pre->next = t;
		t->next = aft;
	    }
	    else
	    cout<<"Empty List";
	}
	void insert_before(int a, int val)
	{
		if(head!= NULL)
		{
			node t = new nod;
			t->data = val;
			node pre = new nod;
			node aft = new nod;
			pre = aft = head;
			if(pre->data != a)
			{
				aft = aft->next;
			while(aft->data != a )
			{
				aft = aft->next;
				pre = pre->next;
			}
			pre->next = t;
			t->next = aft;
			}
			else
			{
			 t->next = head;
			 head = t;
			}
		}
		else
	    cout<<"Empty List";
		
	}
	void delete_node(int val)
	{
		node pre = new nod;
		node aft = new nod;
		pre = aft = head;
		if(pre->data != val)
		{
			aft = aft->next;
			while(aft->data != val)
			{
				aft = aft->next;
				pre = pre->next;
			}
			aft = aft->next;
			pre->next = aft;
			
		}
		
	}
	
};
int main()
{
	list a;
	int b,c,d,e,f,g,h,i;
	while (true)
	{
		cout<<"1.Insert a number"<<'\n'<<"2.Insert after"<<'\n'<<"3.Insert before"<<'\n'<<"4.Delete"<<'\n'<<"5.Display\n";
		cin>>d;
		switch(d)
		{
			case 1 : 
				cout<<"\nEnter the number to be inserted:";
				cin>>b;
				a.insert(b);
				break;
			case 2 :
				cout<<"Enter number";
				cin>>e;
				cout<<"after";
				cin>>d;
				a.insert_after(d,e);
				break;
			case 3:
				cout<<"Enter number";
				cin>>g;
				cout<<"before";
				cin>>h;
				a.insert_before(h,g);
				break;
			case 4:
				cout<"\nEnter the number to be deleted";
				cin>>i;
				a.delete_node(i);
			case 5 :
			a.display();
			break;
		}
		cout<<"\nPress 1 to continue and 0 to exit : \n";
		cin>>c;
		if(c == 0)
		break;
	}
	

	return 0;
	
	
}
