// MAXIMUM SUBARRAY SUM
// You are given a one dimensional array that may contain both positive and negative integers, find the sum of contiguous subarray of numbers which has the largest sum. For example, if the given array is {-2, -5, 6, -2, -3, 1, 5, -6}, then the maximum subarray sum is 7.

// Input Format:
// The first line consists of number of test cases T. Each test case consists of N followed by N integers.

// Constraints:
// 1 <= N <= 100000 1 <= t <= 20  0 <= A[i] <= 100000000

// Output Format
// The maximum subarray sum

// Sample Input
// 2
// 4
// 1 2 3 4
// 3
// -10 5 10
// Sample Output
// 10
// 15



#include <iostream>
using namespace std;
int main() {
    
    int a[8] = {-2, -3, 4, 6, -8, 10, -3, 6 };
    
    int currentSum = 0;
    int maxSum= 0;

    for(int i = 0 ; i< 8; i++){
        currentSum += a[i];
        if(currentSum<0)currentSum= 0;

        maxSum = max(maxSum, currentSum);
    }

    cout<<maxSum;

    //cout<<"Hello World!";
}
