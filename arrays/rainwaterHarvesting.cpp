// RAIN WATER HARVESTING
// Apoorvaa has created an elevated roof. She wants to know how much water can she save during rain.

// Given n non negative integers representing the elevation map where width of every bar is 1, Find the maximum water that she can save.

// Explanation for the Sample input Testcase:
// Elevation Map

// So the total units of water she can save is 5 units

// Input Format:
// First line contains an integer n. Second line contains n space separated integers representing the elevation map.

// Constraints:
// Output Format
// Print a single integer containing the maximum unit of waters she can save.

// Sample Input
// 10
// 0 2 1 3 0 1 2 1 2 1
// Sample Output
// 5

#include<bits/stdc++.h> 
using namespace std; 
  
int findWater(int arr[], int n) 
{ 
    // left[i] contains height of tallest bar to the 
    // left of i'th bar including itself 
    int left[n]; 
  
    // Right [i] contains height of tallest bar to 
    // the right of ith bar including itself 
    int right[n]; 
  
    // Initialize result 
    int water = 0; 
  
    // Fill left array 
    left[0] = arr[0]; 
    for (int i = 1; i < n; i++) 
       left[i] = max(left[i-1], arr[i]); 
  
    // Fill right array 
    right[n-1] = arr[n-1]; 
    for (int i = n-2; i >= 0; i--) 
       right[i] = max(right[i+1], arr[i]); 
  
    // Calculate the accumulated water element by element 
    // consider the amount of water on i'th bar, the 
    // amount of water accumulated on this particular 
    // bar will be equal to min(left[i], right[i]) - arr[i] . 
    for (int i = 0; i < n; i++) 
       water += min(left[i],right[i]) - arr[i]; 
  
    return water; 
} 
  
// Driver program 
int main() 
{ 
    int n;
    cin>>n;
    int arr[n]; //= {0, 1, 0, 2, 1, 0, 1, 3, 2, 1, 2, 1}; 
    for(int i=0; i<n; i++){
      cin>>arr[i];
    }
    //int n = sizeof(arr)/sizeof(arr[0]); 
    //cout << "Maximum water that can be accumulated is "
    cout<< findWater(arr, n); 
    return 0; 
}