#include <iostream>
using namespace std;

void nameRev(string name)
{
    if(name.length()==0)
        return;
    
    string ros = name.substr(1);
    nameRev(ros);
    cout<<name[0];
}

int main()
{
    nameRev("binod");
}