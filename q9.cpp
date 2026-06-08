#include<iostream>
using namespace std;
int main()
{
    int i,j,s,n=5;
    char ch='A';
    for(i=n;i>=1;i--)
    {
        for(s=1;s<=n-i;s++)
        cout<<" ";
        for(j=1;j<=2*i-1;j++)
        
        
            cout<<ch;
            ch++;
        
        cout<<endl;
    }
}