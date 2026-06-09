#include <iostream>
using namespace std;
int main()
{
   int n,sum=0;
   float avg;
   cout<<"enter n:";
   cin>>n;
   int a[n];
   for(int i=0;i<=n;i++)
   {
    cin>>a[i];
    sum=sum+a[i];
    avg=sum/n;

   }
   cout<<"sum:"<<sum;
   cout<<"avg:"<<avg;
   
}
