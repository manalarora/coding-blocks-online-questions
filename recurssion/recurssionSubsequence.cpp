#include<iostream>
#include<set>
#include<cstring>
#include<cmath>
using namespace std;


void subsequences(char *in,char *out,int i,int j,set<string> &s){
	//Base Case
	if(in[i]=='\0'){
		out[j] = '\0';
		cout<<out<<" ";
		//string temp(out); //Create a string object
		//s.insert(temp); //insert into set s 

		return;
	}
	//Rec Case
	
	subsequences(in,out,i+1,j,s);

	out[j] = in[i];
    subsequences(in,out,i+1,j+1,s);

}

int main(){
    
  char a[100];
	cin>>a;
    string temp(a);
	char out[100];
	set<string> s;
	cout<<pow(2,temp.size())<<endl;
    subsequences(a,out,0,0,s);
    int cnt = 0;
	//for(string k:s){
	//	cout<<k<<" ";//
	//	cnt++;
	//}
	//cout<<cnt<<endl;
  
	
	return 0;
}