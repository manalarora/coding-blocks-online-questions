#include <iostream>
#include <string>
using namespace std;

void xorOperation(string s1, string s2){
    int arr[s1.size()] ;
    for(int i=0; i<s1.size(); i++){
        int num1 = s1[i] - '0';
        int num2 = s2[i] - '0';
        arr[i] = num1^num2;
    }

    for(int i=0; i<s1.size(); i++){
        cout<<arr[i];
    }    
    cout<<endl;
}

int main() {
    int n;
    cin>>n;
    for(int i=0;i<n; i++){
        string s1,s2;
        cin>>s1>>s2;
        xorOperation(s1,s2);
    }
    return 0;
}
