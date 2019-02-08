#include<iostream>
#include<vector>
#include<cstring>
#include<algorithm>

using namespace std;

bool myCompare(string s1, string s2){
    if(s1.substr(0, s2.size()).compare(s2.substr(0, s2.size()))==0){
        return true;
    }
    return s1<s2;
}

int main() {
	vector<string> v;
	int n;
	cin>>n;
	for(int i=0; i<n; i++){
		string temp;
		cin>>temp;
		v.push_back(temp);
	}

	sort(v.begin(), v.end(), myCompare);

	for (int i = 0; i < n; ++i)
	{
		cout<<v[i]<<endl;
	}




	return 0;
}