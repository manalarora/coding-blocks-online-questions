// MAXIMUM CIRCULAR SUM
// You are provided n numbers (both +ve and -ve). Numbers are arranged in a circular form. You need to find the maximum sum of consecutive number.

// Input Format:
// First line contains integer t which is number of test case. For each test case, it contains an integer n which is the size of numbers and next line contains n space separated integers.

// Constraints:
// 1<=t<=100 1<=n<=1000

// Output Format
// Print the maximum sum.

// Sample Input
// 1
// 7
// 8 -8 9 -9 10 -11 12
// Sample Output
// 22

#include<stdio.h>
using namespace std;
// Standard Kadane's algorithm to find maximum subarray
// sum
int kadane(int a[], int n);
// The function returns maximum circular contiguous sum
// in a[]
int maxCircularSum(int a[], int n)
{
// Case 1: get the maximum sum using standard kadane'
// s algorithm
int max_kadane = kadane(a, n);
// Case 2: Now find the maximum sum that includes
// corner elements.
int max_wrap = 0, i;
for (i=0; i<n; i++)
{
max_wrap += a[i]; // Calculate array-sum
a[i] = -a[i]; // invert the array (change sign)
}
// max sum with corner elements will be:
// array-sum - (-max subarray sum of inverted array)
max_wrap = max_wrap + kadane(a, n);
// The maximum circular sum will be maximum of two sums
return (max_wrap > max_kadane)? max_wrap: max_kadane;
}
// Standard Kadane's algorithm to find maximum subarray sum
// See https://www.geeksforgeeks.org/archives/576 for details
int kadane(int a[], int n)
{
int max_so_far = 0, max_ending_here = 0;
int i;
for (i = 0; i < n; i++)
{
max_ending_here = max_ending_here + a[i];
if (max_ending_here < 0)
max_ending_here = 0;
if (max_so_far < max_ending_here)
max_so_far = max_ending_here;
}
return max_so_far;
}
/* Driver program to test maxCircularSum() */
int main()
{
//int a[] = {10, -3, -4, 7, 6, 5, -4, -1};
//int n = sizeof(a)/sizeof(a[0]);
int t;
scanf("%d", &t);
//cin>>t;
for(int i=0;i<t;i++)
{
int n;
scanf("%d", &n);
//cin>>n;
int a[n];
for(int j=0;j<n;j++)
{
scanf("%d", &a[j]);
//cin>>a[j];
}
printf("%d \n",
maxCircularSum(a, n));
}
return 0;
}