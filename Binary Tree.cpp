#include<iostream>
using namespace std;
struct nod
{
	int data;
	struct nod *left;
	struct nod *right;
};
typedef struct nod *node;
node root = new nod;
class bt
{
	public :
		bt()
		{
			root = NULL;
		}
		void insert(node temp,node trav)
		{
			if(root == NULL)
			{
				root = temp;
				cout<<"\nRoot Node\n";
				return;
			}
			if(temp->data == trav->data)
			{
				cout<"\nalready exists\n";
				return;
			}
			if(temp->data < trav->data)
			{
				if(trav->left != NULL)
				insert(temp,trav->left);
				else
				{
					trav->left = temp;
					cout<<"\nleft\n";
					return;
				}
			}
			else
			{
				if(trav->right != NULL)
				insert(temp,trav->right);
				else
				{
					trav->right = temp;
					cout<<"\nright\n";
					return;
				}
			}
			
		}
		void inorder(node t)
		{
			if(t == NULL)
			return;
			inorder(t->left);
			cout<<t->data<<"\t";
			inorder(t->right);
		}
		void preorder(node t)
		{
			if(t== NULL)
			return;
			cout<<t->data<<"\t";
			preorder(t->left);
			preorder(t->right);
		}
		void postorder(node t)
		{
			if(t == NULL)
			return;
			postorder(t->left);
			postorder(t->right);
			cout<<t->data<<"\t";
		}
		
};
int main()
{
	bt obj;
	int i = 0;
	while(true)
	{
	int a;
	cout<<"\npress 1 to insert\n";
	cin>>a;
	switch(a)
	{
		case 1 :
			int b;
			cout<<"\nEnter the value to be entered into the node\n";
			cin>>b;
			node temp = new nod;
			temp->data = b;
			temp->left = NULL;
			temp->right = NULL;
			obj.insert(temp,root);
}
if(a == 2)
break;
}
			cout<<"inorder\n":
			obj.inorder(root);
			cout<<"preorder\n";
			obj.preorder(root);
			cout<<"postorder\n";
			obj.postorder(root);

return 0;
}
