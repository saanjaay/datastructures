#include<iostream>
using namespace std;
int main()
{
	int b;
	cout<<"Enter the number of elements:\n";
	cin>>b;
	int a[b];
	cout<<"Elements:\n";
	for(int i=0;i<b;i++)
	cin>>a[i];
	cout<<endl;
	cout<<"Array Elements\n";
	for(int i=0;i<b;i++)
	cout<<a[i]<<" ";
	cout<<'\n';
	for(int i = 0;i<b;i++)
	{
		int j = i;
	for(;j<b;j++)
	{
		if(a[i] > a[j])
		{
			int c = a[i];
			a[i] = a[j];
			a[j] = c;
		}
		
	}
	
	}
	cout<<"\nSorted Array:\n";
	for(int i=0;i<b;i++)
	cout<<a[i]<<" ";
	return 0;
	
}
