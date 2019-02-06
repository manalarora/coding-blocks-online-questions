#include <bits/stdc++.h> 
using namespace std; 
  
// Return sum of two number represented by the arrays. 
// Size of a[] is greater than b[]. It is made sure 
// be the wrapper function 
void calSumUtil(int a[], int b[], int n, int m) 
{ 
    // array to store sum. 
    int sum[n]; 
  
    int i = n - 1, j = m - 1, k = n - 1; 
  
    int carry = 0, s = 0; 
  
    // Until we reach beginning of array. 
    // we are comparing only for second array 
    // because we have already compare the size 
    // of array in wrapper function. 
    while (j >= 0) { 
  
        // find sum of corresponding element 
        // of both arrays. 
        s = a[i] + b[j] + carry; 
        sum[k] = (s % 10); 
  
        // Finding carry for next sum. 
        carry = s / 10; 
  
        k--; 
        i--; 
        j--; 
    } 
  
    // If second array size is less the first 
    // array size. 
    while (i >= 0) { 
  
        // Add carry to first array elements. 
        s = a[i] + carry; 
        sum[k] = (s % 10); 
        carry = s / 10; 
  
        i--; 
        k--; 
    } 
  
    int ans = 0; 
  
    // If there is carry on adding 0 index elements. 
    // append 1 to total sum. 
    if (carry) 
        ans = 10; 
  
    // Converting array into number. 
    for (int i = 0; i<=n-1; i++) { 
        cout<<sum[i]<<", ";
    } 
  
    //return ans / 10; 
} 
  
// Wrapper Function 
void calSum(int a[], int b[], int n, int m) 
{ 
    // Making first array which have 
    // greater number of element 
    if (n >= m) 
        return calSumUtil(a, b, n, m); 
  
    else
        return calSumUtil(b, a, m, n); 
} 
  
// Driven Program 
int main() 
{ 
    int a[100] ; 
    int b[100] ; 
  
    int n ; 
    cin >> n;
    int m ; 
    
    for(int i=0; i<n; i++){
      cin>>a[i];
    }
    cin>>m;
    for(int k=0; k<m; k++){
      cin>>b[k];
    }
    
    
    calSum(a, b, n, m) ;
    cout<<"END";
  
    return 0; 
} 