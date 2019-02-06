#include <iostream>
#include <string>
using namespace std;



void format(char* in, char* out, int i, int j, int num){
    if(in[i]==NULL){
        for(int k=j;k<j+num;k++)
        out[k]='x';
        out[j+num] = '\0';
        cout<<out;
        return;
    }
    if(in[i]=='x'){
        //out[j]=in[i];
        //out[j+1]='*';
        format(in, out, i+1, j,num+1);
    }
    else{
        out[j]=in[i];
        format(in, out, i+1, j+1,num);
    }
}


int main() {
    char input[100] ;
    cin>>input;
    char output[100];
    format(input,output, 0,0,0);
    
    return 0;
}
