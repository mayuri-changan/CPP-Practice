#include <iostream>
using namespace std;

int main() 
{
    int i,j,s,n=5;
    for(i=1;i<=n;i++)
    {
        for(s=1;s<=n-i;s++)
        cout<<" ";
        for(j=1;j<=i;j++)
        cout<<i<<" ";
         cout<<endl;
    }
   
}
   
