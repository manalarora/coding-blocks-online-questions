// PRIME VISITS
// PMO gives two random numbers a & b to the Prime Minister. PM Modi wants to visit all countries between a and b (inclusive) , However due to shortage of time he can't visit each and every country , So PM Modi decides to visit only those countries,for which country number has two divisors. So your task is to find number of countries Mr. Modi will visit.

// Input Format:
// The first line contains N , no of test cases. The next lines contain two integers a and b denoting the range of country numbers.

// Constraints:
// a<=1000000 & b<=1000000. N<=1000

// Output Format
// Output contains N lines each containing an answer for the test case.

// Sample Input
// 2
// 1 10
// 11 20
// Sample Output
// 4
// 4


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
