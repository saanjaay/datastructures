#include<iostream>
using namespace std;
struct nod
{
	int data;
	struct nod *next;
};
typedef struct nod *node;
class stack
{
	private:
		node curr;
	public:
		stack()
		{
			curr = NULL;
		}
		void push(int val)
		{
			
			node t = new nod;
			t->data = val;
			if(curr != NULL)
			{
				t->next = curr;
				curr = t;
			}
			else
			{
				curr = t;
				curr->next = NULL;
			}
		}
		void pop()
		{
			curr = curr->next;
		}
		void display()
		{
			node t = new nod;
			t = curr;
			while(t != NULL)
			{
				cout<<t->data<<'\t';
				t = t->next;
			}
		}
};
int main()
{
	stack s;
	int a,b;
	while(true)
	{
		cout<<"\n1.push\n2.pop \n3.display\n4.Exit\n";
		cin>>a;
		switch(a)
		{
			case 1 :
				cout<<"Enter value";
				cin>>b;
				s.push(b);
				break;
			case 2 :
				s.pop();
				break;
			case 3 :
				s.display();
				break;
			case 4 :
				break;
		}
		if(a == 4)
		break;
	}
	
	
	
	
}
