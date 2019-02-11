// FORM BIGGEST NUMBER
// You are provided an array of numbers. You need to arrange them in a way that yields the largest value.

// Input Format:
// First line contains integer t which is number of test case. For each test case, it contains an integer n which is the size of array A[] and next line contains n space separated integers A[i] .

// Constraints:
// 1<=t<=100 1<=m<=100 1<=A[i]<=10^5

// Output Format
// Print the largest value.

// Sample Input
// 1
// 4
// 54 546 548 60
// Sample Output
// 6054854654

#include <bits/stdc++.h> 
using namespace std; 


// A comparison function which is used by sort() in printLargest() 
int myCompare(string X, string Y) 
{ 
    // first append Y at the end of X 
    string XY = X.append(Y); 
  
    // then append X at the end of Y 
    string YX = Y.append(X); 
  
    // Now see which of the two formed numbers is greater 
    return XY.compare(YX) > 0 ? 1: 0; 
} 
  
// The main function that prints the arrangement with the largest value. 
// The function accepts a vector of strings 
void printLargest(vector<string> arr) 
{ 
    // Sort the numbers using library sort funtion. The function uses 
    // our comparison function myCompare() to compare two strings. 
    // See http://www.cplusplus.com/reference/algorithm/sort/ for details 
    sort(arr.begin(), arr.end(), myCompare); 
  
    string result = "";
    for (int i=0; i < arr.size() ; i++ ) 
        result = result + arr[i];
        
        int myint1 = stoi(result);
        cout<<myint1;
} 
  
// driver program to test above functions 
int main() 
{ 
    vector<string> arr; 
    int test;
    cin>>test;
    for(int i=0;i<test; i++){
      int n;
      cin>>n;
      for(int k = 0; k<n; k++){
        string temp;
        cin>>temp;
         arr.push_back(temp); 
      }
      printLargest(arr); 
      //cout<<6054854654;
    }
    return 0;
}