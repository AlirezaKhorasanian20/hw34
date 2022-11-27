#include <iostream>
using namespace std;
int main()
{
	int n,m; 
	cout<<"enter number:";
	cin>>n;
	cout<<"\n"<<"enter exponent:";
	cin>>m;
	int min=0,temp=n;
    while(n-m>=0){
       n-=m;
       min++;
	}
    cout<<"\n\n"<<temp<<" / "<<m<<" = "<<min;
}
