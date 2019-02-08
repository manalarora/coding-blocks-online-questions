#include <iostream>
#include <algorithm>
#include <cstring>
using namespace std;

bool myCompare(pair<string, int> p1, pair<string, int> p2){
    if(p1.second==p2.second)return p1.first<p2.first;
    return p1.second>p2.second;
}



int main() {
    int base;
    cin>>base;
    int n;
    cin>>n;

    pair<string,int> p[n];
    for(int i =0; i<n; i++){
        string temp;
        int sallery;
        cin>>temp;
        cin>>sallery;
        p[i].first = temp;
        p[i].second = sallery;
    }
    sort(p, p+n, myCompare);

    for(int j=0; j<n; j++){
        if(p[j].second>base){
            cout<<p[j].first<<" "<<p[j].second<<endl;
        }
    }



}
