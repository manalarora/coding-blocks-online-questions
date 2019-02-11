// ARRAYS-MAX VALUE IN ARRAY
// Take as input N, the size of array. Take N more inputs and store that in an array. Write a function which returns the maximum value in the array. Print the value returned.

// 1.It reads a number N.

// 2.Take Another N numbers as input and store them in an Array.

// 3.calculate the max value in the array and return that value.

// Input Format:
// First line contains integer n as size of array. Next n lines contains a single integer as element of array.

// Constraints:
// N cannot be Negative. Range of Numbers can be between -1000000000 to 1000000000

// Output Format
// Print the required output.

// Sample Input
// 4
// 2
// 8
// 6
// 4
// Sample Output
// 8


#include <iostream>
using namespace std;
int main() {
    int n;
	cin>>n;
	int a[n];
	int max = -100000;
	for(int i =0; i<n ; i++){
	  cin>>a[i];
	  if(a[i]>max)max= a[i];
	}
	
	cout<<max;
	return 0;
}