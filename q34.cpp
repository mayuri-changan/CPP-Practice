#include <iostream>
using namespace std;

int main() {
    string s;
    getline(cin,s);
    string vowels="", consonants="";
    
    for(char c : s){
        if(c>='A' && c<='Z') c+=32; 
        if(c=='a'||c=='e'||c=='i'||c=='o'||c=='u') vowels+=c;
        else if(c>='a' && c<='z') consonants+=c;
    }

    cout << "Vowels: " << vowels << endl;
    cout << "Consonants: " << consonants << endl;
}
// ========================================Count and Separate Vowels & Consonants==========================================================
