
 #include <iostream>
 using namespace std;
  int main()
{
    int n,rev=0,t;
    cout<<"enter n:";
    cin>>n;
    t=n;
    while(n)
    {
        rev=rev*10+n%10;
        n/=10;
    }
    cout<<(t==rev?"pallindrome":"not");

}

