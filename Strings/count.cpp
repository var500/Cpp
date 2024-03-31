#include <iostream>
#include <string>
using namespace std;

int main(){
    string s1="asffhusdhfdnjnc";
    int arr[26];
    for(int i=0;i<26;i++){
        arr[i]=0;
    }

    int maxCount=0;
    for(int i=0;i<s1.size();i++){
        arr[s1[i]-'a']++;
    }
    char ans = 'a';
    for(int i=0;i<26;i++){
        if(arr[i]>maxCount){
            maxCount=arr[i];
            ans = i+'a';
        }
    }

    cout<<ans<<" "<<maxCount;

}