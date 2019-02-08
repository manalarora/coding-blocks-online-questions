#include <bits/stdc++.h> 
using namespace std; 
  
int mostFrequent(int arr[], int n) 
{ 
    // Insert all elements in hash. 
    map<int, int> hash; 
    for (int i = 0; i < n; i++) 
        hash[arr[i]]++; 
  
    // find the max frequency 
    int max_count = 0, res = -1; 
    for (auto i : hash) { 
        if (max_count < i.second) { 
            res = i.first; 
            max_count = i.second; 
        } 
    } 
  
    return res; 
} 
  
// driver program 
int main() 
{ 
    
    int n ;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
      cin>>arr[i];
    }
    
    cout << mostFrequent(arr, n); 
    return 0; 
} 