#include<iostream>
#include<algorithm>
#include<math.h>

#define ll long long

using namespace std;

int main(int argc, char const *argv[])
{
	int t;
	cin>>t;
	while(t--){
		ll int n;
		cin>>n;
		ll int k;
		cin>>k;
		ll int s = 0;
		bool found = false;
		ll int foundIdx = -1;
		ll int mid = -1;
		ll int e = n;


		while(s<=e){
			mid = (s + e)/2;
			if(pow(mid, k)<=n){
				found= true;
				foundIdx=mid;
				s=mid+1;
			}
			else{
				e = mid-1;
			}
			
		}

		if(found){
			cout<<foundIdx<<endl;
		}

	}
	return 0;
}