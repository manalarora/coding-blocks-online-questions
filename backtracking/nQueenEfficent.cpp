#include <iostream>
using namespace std;

int rd[30] = {0};
int ld[30] = {0};
int c[30]  = {0};

int nQueen(int path[][10], int n, int i){
    // BASE CASE
    if(i==n){
        //display path 
        for(int k=0;k<n;k++){for(int l=0;l<n;l++){cout<<path[k][l];}cout<<endl;}cout<<endl;
        return 1;
    }

    // REC CASE
    int cnt =0;
    for(int j=0; j<n; j++){
        if(!c[j] && !ld[i-j+n-1] and !rd[i+j]){
            c[j] = ld[i-j+n-1] = rd[i+j] = 1;
            path[i][j] = 1;
            cnt+= nQueen(path,n,i+1);
            c[j] = ld[i-j+n-1] = rd[i+j] = 0;
            path[i][j] = 0;

        }
    }
    return cnt;
}


int main() {
    int path[10][10] ={0};
    cout<<nQueen(path, 8, 0);
}
