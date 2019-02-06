#include<iostream>
#include<set>
#include<cstring>
using namespace std;

void find(int* arr, int n, int target, int i){
    if(i==n)return;

    if(arr[i]==target)
    cout<<i<<" ";
    find(arr, n, target, i+1);

}

int main(){
  int n;
  cin>>n;
  int a[n];
  for(int i=0;i<n; i++)
  cin>>a[i];
  int target;
  cin>>target;  

  find(a, n, target, 0); 
	
	return 0;
}