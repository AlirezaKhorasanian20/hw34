#include<iostream>
using namespace std; 
int main() 
{
    int a, b, n1, n2, temp, kmm;
    cout<<"Enter number1 : ";
    cin>>a;
    cout<<"Enter number2 : ";
    cin>>b;
    n1 = a;
    n2 = b;
    while(true){
        
        if(b == 0) break;
        
        temp = a%b;
        a = b;
        b = temp;
    }
    cout<<"\n\nB.M.M Is :"<<a<<endl;
    return 0;
}
