#include <iostream>
#include <string>
using namespace std;



void format(char* in, char* out, int i, int j){
    if(in[i]==NULL){
        out[j]='\0';
        cout<<out;
        return;
    }
    if(in[i]==in[i+1]){
        //out[j]=in[i];
        //out[j+1]='*';
        format(in, out, i+1, j);
    }
    else{
        out[j]=in[i];
        format(in, out, i+1, j+1);
    }
}


int main() {
    char input[100] ;
    cin>>input;
    char output[100];
    format(input,output, 0,0);
    
    return 0;
}
