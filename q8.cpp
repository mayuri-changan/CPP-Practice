#include<iostream>
using namespace std;
int main()
{
    int i,val,j,n=4;
    for(i=1;i<=n;i++)
    {
        val=i%2;
        for(j=1;j<=i;j++)
        {
            cout<<val<<" ";
            val=1-val;
        }
        cout<<endl;
    }
    return 0;

}