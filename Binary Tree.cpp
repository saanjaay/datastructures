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
		
};
int main()
{
	bt obj;
	while(true)
	{
	int a;
	cout<<"1.insert\n2.delete\n3.Inorder Travasal\n4.Preorder Travasal\n5.Postorder Travasal\n6.Exit\n";
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
			break;			
}
}
}
