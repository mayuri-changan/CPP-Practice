#include<iostream>
using namespace std;
int main()
{
    int i,j,n=6,s;
    int num=1;
    char ch='a';
    for(i=1;i<=n;i++)
    {
        for(s=1;s<=n-i;s++)
        {
            cout<<" ";
        }
        for(j=1;j<=i;j++)
        {
            if(i%2==0)
            {
                cout<<num<<" ";
                num++;
            }
            else
            {
                cout<<ch<<" ";
                ch++;
            }
            
        }
        cout<<endl;
       
    }
    return 0;
}
