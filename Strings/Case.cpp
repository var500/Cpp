#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main(){
    string s = "hey There";
    for(int i=0;i<s.length();i++){
        if(s[i]>='a' && s[i]<='z')
            s[i]=s[i]-32;
    }
    cout<<s<<endl;

    for(int i=0;i<s.size();i++){
        if(s[i]>='A' && s[i]<='Z') s[i] +=32;
    }

    cout<<s<<endl;

    // Using Inbuild Function
    string s1 = "Using The inbuilt Functions";
    transform(s1.begin(),s1.end(),s1.begin(), ::toupper);
    cout<<s1<<endl;
    transform(s1.begin(),s1.end(),s1.begin(), ::tolower);
    cout<<s1<<endl;
}