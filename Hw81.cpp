#include<iostream>
using namespace std;
int main()
{
	int a[10];
	for(int i=0;i<10;i++)
	   cin>>a[i];
	int max=a[0];
	int min=a[0];
	for(int i=0;i<10;i++)
	{
		if(a[i]>max)
		   max=a[i];
		if(a[i]<min)
		    min=a[i];
	}
	double avg=(max+min)/2;
	cout<<"avg "<<max<<" and "<<min<<" is : "<<avg;
}
