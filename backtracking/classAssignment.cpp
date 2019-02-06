#include<iostream>

using namespace std;

int fun(int n){
  if(n==1)return 2;
  if(n==0)return 1;
  
  return fun(n-1)+fun(n-2);
}

int main() {
	int t;
	cin>>t;
	while(t--){
	int n;
	cin>>n;
	cout<<"#"<<n<<" : "<<fun(n)<<endl;
	}
	
	return 0;
}