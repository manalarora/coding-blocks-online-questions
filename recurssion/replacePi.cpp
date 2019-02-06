#include <iostream>
#include <string>
using namespace std;



void format(char* in, char* out, int i, int j){
    if(in[i]==NULL){
        out[j]='\0';
        cout<<out<<endl;
        return;
    }
    if(in[i]=='p' && in[i+1]=='i'){
        out[j] = '3';
        out[j+1]='.';
        out[j+2]='1';
        out[j+3]='4';
        format(in, out, i+2, j+4);
    }
    else{
        out[j]=in[i];
        format(in, out, i+1, j+1);
    }
}


int main() {
    int test;
    cin>>test;
    for(int i=0;i<test;i++){
    char input[100] ;
    cin>>input;
    char output[100];
    format(input,output, 0,0);
    }
    return 0;
}
