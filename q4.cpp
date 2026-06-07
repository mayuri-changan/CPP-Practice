
#include<iostream>
using namespace std;
int main()
{
   int i,j,s,n=5;
   for(i=0;i<=n;i++)
   {
    for(s=0;s<=n-i-1;s++)
    {
        cout<<" ";
    }
    int value=1;
    for(j=0;j<=i;j++)
    {
      cout<<value<<" ";
      value=value*(i-j)/(j+1);
    }
    cout<<endl;
   }
   return 0;
}