

#include <iostream>
using namespace std;
int main()
{
    int n,flag=0;
    cout<<"enter n:";
    cin>>n;
    if(n<=1)flag=1;
    for(int i=2;i<=n/2;i++)
    
        if(n%i==0)
        {
            flag=1;
            break;

        }
        cout<<(flag?"not prime":" prime");
    
}