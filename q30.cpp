#include <iostream>
using namespace std;
int main(){
    string s="AAB";
    int f[26]={0};
    for(char c:s) f[c-'A']++;
    int max=0;
    for(int i=0;i<26;i++)
        if(f[i]>max) max=f[i];
    cout<<(max>(s.length()+1)/2?"NO":"YES");
}


