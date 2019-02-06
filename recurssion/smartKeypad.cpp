#include<iostream>
#include<cstring>
using namespace std;

string table[] = { " ", ".+@$", "abc", "def", "ghi", "jkl" , "mno", "pqrs" , "tuv", "wxyz" };

void print(string in, string out, int i){
  
  if(i==in.length()){
    cout<<out<<endl;
  }
  
  int digit = in[i] - '0';
  for(int k=0; k<table[digit].length();k++){
    print(in, out+table[digit][k], i+1);
  }
  
}



int main() {
	
	string in;
	cin>>in;
	string out = "";
	print(in, out,0);
	
	
	return 0;
}