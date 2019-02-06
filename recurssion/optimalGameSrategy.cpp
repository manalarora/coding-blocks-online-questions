#include<iostream>
using namespace std;

int strategy(int* arr, int s, int e){
  if(s>e)return 0;
  
  int op1 = arr[s] + min(strategy(arr, s+2, e), strategy(arr, s+1, e-1));
  int op2 = arr[e] + min(strategy(arr, s, e-2), strategy(arr, s+1, e-1));
  
  return max(op1, op2);
  
}


int main() {
	int n;
	cin>>n;
	int arr[n];
	for(int i = 0;i<n;i++)cin>>arr[i];
	
	
	cout<<strategy(arr, 0, n-1);
	return 0;
}