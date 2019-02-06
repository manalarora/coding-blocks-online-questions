#include <iostream>
using namespace std;
bool isPrime(int num){
     for(int i=2; i < num; i++){
         if (num%i==0)return false;
     }
    return true;
}
 
int main() {
    int test;
    cin>>test;
    for(int z = 0;z<test; z++){
    int n1, n2;
    cin>>n1>>n2;
    if(n1==1)n1++;
    int cnt =0;
    for(int i =n1; i<=n2; i++){
        if(isPrime(i))cnt++;
    }
    cout<<cnt<<endl;
    }
    return 0;
}
