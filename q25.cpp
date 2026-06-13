#include <iostream>
using namespace std;
int main()
{
    int a[3][3]={{1,2,3},{4,5,6},{7,8,9}};
    int p=0,s=0;
    for(int j=0;j<3;j++)
    {
        p=p+a[j][j];
        s=s+a[j][2-j];
        
    }
    cout<<p<<" "<<s;
}





