#include<iostream>
using namespace std;
int main()
{
	int n,m,sum=1; 
	cout<<"enter number:";
	cin>>n;
	cout<<"\n"<<"enter exponent:";
	cin>>m;
	for(int i=1;i<=m;i++)
		sum*=n;
    cout<<"\n\n"<<n<<" ^ "<<m<<" = "<<sum;
    return 0;
}
