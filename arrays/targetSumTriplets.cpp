// ARRAYS-TARGET SUM TRIPLETS
// Take as input N, the size of array. Take N more inputs and store that in an array. Take as input “target”, a number. Write a function which prints all triplets of numbers which sum to target.

// Input Format:
// First line contains input N. Next N lines contains the elements of array and N+1 line contains target number.

// Constraints:
// Length of Array should be between 1 and 1000.

// Output Format
// Print all the triplet present in the array.

// Sample Input
// 9
// 5
// 7
// 9
// 1
// 2
// 4
// 6
// 8
// 3
// 10
// Sample Output
// 1, 2 and 7
// 1, 3 and 6
// 1, 4 and 5
// 2, 3 and 5


#include <bits/stdc++.h> 
using namespace std; 
  
// returns true if there is triplet with sum equal 
// to 'sum' present in A[]. Also, prints the triplet 
void find3Numbers(int A[], int arr_size, int sum) 
{ 
    int l, r; 
  
    /* Sort the elements */
    sort(A, A + arr_size); 
  
    /* Now fix the first element one by one and find the 
       other two elements */
    for (int i = 0; i < arr_size - 2; i++) { 
  
        // To find the other two elements, start two index 
        // variables from two corners of the array and move 
        // them toward each other 
        l = i + 1; // index of the first element in the 
        // remaining elements 
  
        r = arr_size - 1; // index of the last element 
        while (l < r) { 
            if (A[i] + A[l] + A[r] == sum) { 
                cout<<A[i]<<", "<<A[l]<<" and "<<A[r]<<endl;
                l++;
                //return true; 
            } 
            else if (A[i] + A[l] + A[r] < sum) 
                l++; 
            else // A[i] + A[l] + A[r] > sum 
                r--; 
        } 
    } 
  
    // If we reach here, then no triplet was found 
    return ; 
} 
  
/* Driver program to test above function */
int main() 
{ 
    
    int sum ; 
    int arr_size; 
    cin>>arr_size;
    int A[arr_size] ;
    for(int i=0; i<arr_size; i++){
        cin>>A[i];
    }
    cin>>sum;
    find3Numbers(A, arr_size, sum); 
  
    return 0; 
} 