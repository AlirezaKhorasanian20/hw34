#include<iostream>
using namespace std;
int main()
{
	int a[5];
	int b[5];
	for(int i=0;i<5;i++)
	   cin>>a[i];
	for(int i=0;i<5;i++)
	   cin>>b[i];
	for(int i=0;i<5;i++)
	{
		int temp=a[i];
		a[i]=b[i];
		b[i]=temp;
	}
	cout<<" array a is : \n";
	for(int i=0;i<5;i++)
	   cout<<a[i]<<" , ";
	cout<<"\n array b is : \n";
	for(int i=0;i<5;i++)
	   cout<<b[i]<<" , ";
	return 0;
}
