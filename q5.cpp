#include<iostream>
using namespace std;
int main()
{
    int i,j,s,n=4;
    for(i=1;i<=n;i++)
    {
        for(s=1;s<=n-i;s++)
        cout<<" ";
        for(j=i;j>=1;j--)
        cout<<j;
        for(j=2;j<=i;j++)
        cout<<j;
        cout<<endl;
    }
}