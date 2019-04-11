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
};
int main()
{
	list a;
	return 0;
	
}
