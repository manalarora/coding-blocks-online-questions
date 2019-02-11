// ROTATE IMAGE (N X N ARRAY)
// Given a 2D array of size N x N. Rotate the array 90 degrees anti-clockwise.

// Input Format:
// First line contains a single integer N. Next N lines contain N space separated integers.

// Constraints:
// N < 1000

// Output Format
// Print N lines with N space separated integers of the rotated array.

// Sample Input
// 4
// 1 2 3 4
// 5 6 7 8
// 9 10 11 12
// 13 14 15 16
// Sample Output
// 4 8 12 16 
// 3 7 11 15 
// 2 6 10 14 
// 1 5 9 13

#include<iostream>

using namespace std;



void reverseColumns(int arr[][20], int R, int C)
{
    for (int i = 0; i < C; i++)
        for (int j = 0, k = C - 1; j < k; j++, k--)
            swap(arr[j][i], arr[k][i]);
}

// Function for do transpose of matrix
void transpose(int arr[][20], int R, int C)
{
    for (int i = 0; i < R; i++)
        for (int j = i; j < C; j++)
            swap(arr[i][j], arr[j][i]);
}

// Function for print matrix
void printMatrix(int arr[][20], int R, int C)
{
    for (int i = 0; i < R; i++) {
        for (int j = 0; j < C; j++)
            cout << arr[i][j] << " ";
        cout << '\n';
    }
}

// Function to anticlockwise rotate matrix
// by 90 degree
void rotate90(int arr[][20], int R, int C)
{
    transpose(arr, R, C);
    reverseColumns(arr, R, C);
}

// Driven code
int main()
{
    int n;
    cin>>n;

    int arr[20][20];
    for(int i=0; i<n; i++){
        for(int j=0;j<n;j++){
            cin>>arr[i][j];
        }
    }
    rotate90(arr, n, n);
    printMatrix(arr, n, n);
    return 0;
}