#include<bits/stdc++.h>
using namespace std;

bool mycmp( pair<int,int> a, pair<int,int> b){
    return a.first<b.first;
}

bool cmp(pair<int,int> a,pair<int,int> b){
    return a.second<b.second;
}


int main() {
    int n;
    cin>>n;
    pair<int,int> pp[n],p[n];
    for(int i=0;i<n;i++){
        cin>>pp[i].first>>pp[i].second;
        p[i].first=pp[i].first;
        p[i].second=pp[i].second;
    }
    sort(pp,pp+n,mycmp);
    sort(p,p+n,cmp);
    int max_diff_y=0;
    int A=0;
    for(int i=0;i<n-1;i++){
        if(abs(p[i].second-p[i+1].second)>max_diff_y){
        max_diff_y=abs(p[i].second-p[i+1].second);
        //A=(max_diff_y-1)*(abs(p[i].first-p[i+1].first)-1);
        }
    }
    int ans=0;
    for(int i=0;i<n-1;i++){
        if((abs(pp[i].first-pp[i+1].first)-1)*(max_diff_y-1)>A)
        A=(abs(pp[i].first-pp[i+1].first)-1)*(max_diff_y-1);
    }
    cout<<A<<endl;
	return 0;
}