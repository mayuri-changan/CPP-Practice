#include <iostream>
using namespace std;
int main()
{
    string s="aabbccdd";
    for(int i=0;i<s.length();i++)
    {
    for(int j=i+1;j<s.length();j++)
    {
    if(s[i]==s[j])
    {
        s.erase(j,1);
        j--;

    }
    }
    }
    cout<<s;

}