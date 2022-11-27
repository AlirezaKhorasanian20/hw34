#include<iostream>
using namespace std;
bool prim(int n)
{
	int i;
    for(i=2;i<n;i++)
    {
        if(n%i==0)
        {
            return false;
        }
    }
    if(n==i)
    {
        return true;
    }
} 
int main()
{
    int i,n,sum=0;;
    cout<<"Enter number : " ;
    cin>>n;
    for(int i=0;i<n;i++)
    {
    	if(prim(i))
    	  sum=sum+i;
	}
    cout<<"Sum Prim Number low than  "<<n<<" is : "<<sum;
    return 0;
}
