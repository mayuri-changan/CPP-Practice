#include <iostream>
using namespace std;
int main()
{
    int a[2][3]={{1,2,3},{4,5,6}};
    int key=5,found=0;
    for(int i=0;i<2;i++)
    { 
        for(int j=0;j<3;j++)
        {
            if(a[i][j]==key)
            {
            found=1;
            }
        }
    }
    if(found)
    
        cout<<"found";
        else
        cout<<"not found";
    
    

}