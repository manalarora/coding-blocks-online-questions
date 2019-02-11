// BROKEN CALCULATOR
// Andrew was attempting a mathematics test where he needed to solve problems with factorials. One such problem had an answer which equaled 100! ,He wondered what would this number look like. He tried to calculate 100! On his scientific calculator but failed to get a correct answer. Can you write a code to help Andrew calculate factorials of such large numbers?

// Input Format:
// a single lined integer N

// Constraints:
// 1 < = N < = 500

// Output Format
// Print the factorial of N

// Sample Input
// 5
// Sample Output
// 120

#include<iostream> 
using namespace std; 
  
// Maximum number of digits in output 
#define MAX 500 
  
int multiply(int x, int res[], int res_size); 
  
// This function finds factorial of large numbers 
// and prints them 
void factorial(int n) 
{ 
    int res[MAX]; 
  
    // Initialize result 
    res[0] = 1; 
    int res_size = 1; 
  
    // Apply simple factorial formula n! = 1 * 2 * 3 * 4...*n 
    for (int x=2; x<=n; x++) 
        res_size = multiply(x, res, res_size); 
  
    //cout << "Factorial of given number is \n"; 
    for (int i=res_size-1; i>=0; i--) 
        cout << res[i]; 
} 
  
// This function multiplies x with the number  
// represented by res[]. 
// res_size is size of res[] or number of digits in the  
// number represented by res[]. This function uses simple  
// school mathematics for multiplication. 
// This function may value of res_size and returns the  
// new value of res_size 
int multiply(int x, int res[], int res_size) 
{ 
    int carry = 0;  // Initialize carry 
  
    // One by one multiply n with individual digits of res[] 
    for (int i=0; i<res_size; i++) 
    { 
        int prod = res[i] * x + carry; 
  
        // Store last digit of 'prod' in res[]   
        res[i] = prod % 10;   
  
        // Put rest in carry 
        carry  = prod/10;     
    } 
  
    // Put carry in res and increase result size 
    while (carry) 
    { 
        res[res_size] = carry%10; 
        carry = carry/10; 
        res_size++; 
    } 
    return res_size; 
} 
  
// Driver program 
int main() 
{ 
    int x;
    cin>>x;
    factorial(x); 
    return 0; 
} 