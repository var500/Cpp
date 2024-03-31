#include <iostream>
using namespace std;

int raisedto(int n, int p){
    if(p==0){
        return 1;
    }

    int ans = n*raisedto(n,p-1);
    return ans;
}

int main(){
    int n=2,p=5;
    cout<<raisedto(n,p);
}