#include<iostream>
using namespace std;

int lastIndex(int *a,int n, int i, int target){
	if(i==n){
		return -1;
	}

	//Recursive Case
	int ret = lastIndex(a, n, i+1, target);
	if(ret!=-1)return ret;
	
	if(a[i]==target)return i;
	else return -1;
}

int main(){

	  int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n; i++)
      cin>>a[i];
	  int target;
	  cin>>target;
	
	if((lastIndex(a, n, 0, target))!=-1){
		cout<<lastIndex(a, n, 0, target);
	}
	else{
		cout<<"-1";
	}

	return 0;
}