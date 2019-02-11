// ARRAYS-TARGET SUM PAIRS
// Take as input N, the size of array. Take N more inputs and store that in an array. Take as input “target”, a number. Write a function which prints all pairs of numbers which sum to target.

// Input Format:
// Constraints:
// Length of the arrays should be between 1 and 1000.

// Output Format
// Sample Input
// 5
// 1
// 3
// 4
// 2
// 5
// 5
// Sample Output
// 1 and 4
// 2 and 3

#include <iostream>
using namespace std;
int main() {
    int n;
    cin>>n;
	
	int a[n];
    for(int i= 0; i<n; i++){
        cin>>a[i];
    }
    int target;
    cin>> target;
	for(int i =0; i<n ; i++){
        for(int j=i+1 ; j<n; j++){  
	    if(a[i]+a[j]==target)cout<<min(a[i], a[j])<<" and "<<max(a[i], a[j])<<endl;
        }
    }
	
	return 0;
}