#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main(){
    string s = "52613";
    sort(s.begin(),s.end(),greater<int>());
    cout<<s<<endl;
}