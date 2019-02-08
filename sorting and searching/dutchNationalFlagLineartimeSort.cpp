#include<stdio.h> 
#include <iostream>
#include <math.h> 
using namespace std;
  
/* Function to swap *a and *b */
void swap(int *a, int *b); 
  
// Sort the input array, the array is assumed to 
// have values in {0, 1, 2} 
void sort012(int a[], int arr_size) 
{ 
    int lo = 0; 
    int hi = arr_size - 1; 
    int mid = 0; 
  
    while (mid <= hi) 
    { 
        switch (a[mid]) 
        { 
        case 0: 
            swap(&a[lo++], &a[mid++]); 
            break; 
        case 1: 
            mid++; 
            break; 
        case 2: 
            swap(&a[mid], &a[hi--]); 
            break; 
        } 
    } 
} 
  
/* UTILITY FUNCTIONS */
void swap(int *a, int *b) 
{ 
    int temp = *a; 
    *a = *b; 
    *b = temp; 
} 
  
/* Utility function to print array arr[] */
void printArray(int arr[], int arr_size) 
{ 
    int i; 
    for (i = 0; i < arr_size; i++) 
        cout<<arr[i]<<endl;
} 
  
/* driver program to test */
int main() 
{ 
    int n;
     
    cin>>n;
    int arr[n];
    for(int i=0; i<n;  i++)cin>>arr[i];
    sort012(arr, n); 
  
    //printf("array after segregation "); 
    printArray(arr, n); 
  
    //getchar(); 
    return 0; 
} 