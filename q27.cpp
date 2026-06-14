#include <iostream>
using namespace std;
int main()
{
    string s="madam";
    int i=0,j=s.length()-1,flag=0;
    while(i<j)
    {
        if(s[i]!=s[j])
        {
             flag=1; break;
        }
        i++; j--;
    }
    cout<<(flag?"Not":"Palindrome");
}













  