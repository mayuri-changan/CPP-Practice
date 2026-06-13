#include <iostream>
using namespace std;
int main()
{
    int a[2][3]={{1,2,3},{4,5,6}};
    for(int j=0;j<3;j++)
    {
         int sum=0;
        for(int i=0;i<2;i++)
        sum=sum+a[i][j];
        cout<<sum<<" ";
       

    }

}


