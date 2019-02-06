#include <bits/stdc++.h> 
using namespace std; 

typedef pair<int, pair<int, int> > myPair; 
  
vector<int> mergeKArrays(int arr[][5000], int k, int n) 
{ 
    vector<int> output; 
  
    priority_queue<myPair, vector<myPair>, greater<myPair> > pq; 
  
    for (int i = 0; i < k; i++) 
        pq.push({ arr[i][0], { i, 0 } }); 
  
    while (pq.empty() == false) { 
        myPair curr = pq.top(); 
        pq.pop(); 
  
        int i = curr.second.first;   //index of array
        int j = curr.second.second;  //position of element
  
        output.push_back(curr.first); 

        if (j + 1 < n) 
            pq.push({ arr[i][j + 1], { i, j + 1 } }); 
    } 
  
    return output; 
} 
  
// Driver program to test above functions 
int main() 
{ 
    int k;
    int n;
    cin>>k>>n;
    int arr[5000][5000];
    //arr.reserve(n*k);

     for (int i = 0; i < k; i++) { 
        for (int j = 0; j < n; j++) 
            cin>>arr[i][j]; 
    } 
    vector<int> output = mergeKArrays(arr, k ,n); 
  
    
    for (auto x : output) 
        cout << x << " "; 
  
    return 0; 
} 