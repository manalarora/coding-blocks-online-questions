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
