#include<iostream>
using namespace std;
void swap(int &a , int &b)
{

    int temp;
    temp=a;
    a=b;
    b=temp;
}

int main()
{  
    int a=10;
    int b=20;
    swap(a,b);
    cout<<" after swap a"<<a;
     cout<<" after swap b"<<b;

    return 0;
    
}
    

