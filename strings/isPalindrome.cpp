#include <iostream>
#include <string>
using namespace std;

bool isPalindrome(int arr[], int s, int e){
    if(s>=e)return true;

    if(arr[s]==arr[e]){
        return isPalindrome(arr, s+1, e-1);
    }
    else 
    return false;
}

int main() {
    int n;
    cin>>n;
    int arr[n]; 
    for(int i=0; i<arr[n]; i++){
        cin>>arr[i];
    }
    if(isPalindrome(arr, 0, n-1))
    cout<<"true";
    else
    cout<<"false";
    
}
