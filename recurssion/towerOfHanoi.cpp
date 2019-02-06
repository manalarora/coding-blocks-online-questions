#include<iostream>
using namespace std;

void towerOfHanoi(int n, char from_rod, char to_rod, char aux_rod) 
{ 
    if (n == 1) 
    { 
        printf("\n Moving ring 1 from %c to %c", from_rod, to_rod); 
        return; 
    } 
    towerOfHanoi(n-1, from_rod, aux_rod, to_rod); 
    printf("\n Moving ring %d from %c to %c", n, from_rod, to_rod); 
    towerOfHanoi(n-1, aux_rod, to_rod, from_rod); 
} 
  
int main() 
{ 
    int n; // Number of disks 
    cin>>n;
    towerOfHanoi(n, 'A', 'B', 'C');  // A, B and C are names of rods 
    return 0; 
} 