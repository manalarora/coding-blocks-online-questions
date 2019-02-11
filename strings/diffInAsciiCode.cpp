#include <iostream>
#include <string>
using namespace std;

int main() 
{ 
    string str;
    cin>>str;
    int i=0;
    for(; i<str.size()-1; i++){
        cout<<str[i]<<str[i+1]-str[i];
    }
    cout<<str[i];
    return 0; 
} 