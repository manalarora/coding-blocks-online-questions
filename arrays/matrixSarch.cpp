// MATRIX SEARCH
// Given an n x m matrix, where every row and column is sorted in increasing order, and a number x . Find if element x is present in the matrix or not.

// Input Format:
// First line consists of two space separated integers N and M, denoting the number of element in a row and column respectively. Second line of each test case consists of N*M space separated integers denoting the elements in the matrix in row major order. Third line of each test case contains a single integer x, the element to be searched.

// Constraints:
// 1 <= N,M <= 30 0 <= A[i] <= 100

// Output Format
// Print 1 if the element is present in the matrix, else 0.

// Sample Input
// 3 3
// 3 30 38
// 44 52 54
// 57 60 69
// 62

// 1 6
// 18 21 27 38 55 67
// 55
// Sample Output
// 0
// 1


#include <algorithm> 
#include <iostream> 
  
using namespace std; 
int main() {
	int n1, n2;
	cin>>n1>>n2;
	int n = n1*n2;
	int arr[n];
	
	for(int i=0; i<n; i++){
	  cin>>arr[i];
		}
		
		int element;
		cin>>element;
		//cout<<(int)binary_search(arr, arr+n, element);
	  if (binary_search(arr, arr + n, element)) 
        cout << "1"; 
    else
        cout << "0"; 
	
	return 0;
}