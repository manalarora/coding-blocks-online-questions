#include<iostream>
#include<cstring>
#include<vector>
using namespace std;

string table[] = { "","abc", "def", "ghi", "jkl" , "mno", "pqrs" , "tuv", "wx", "yz" };

bool CheckSubstring(string firstString, string secondString){
    if(secondString.size() > firstString.size())
        return false;

    for (int i = 0; i < firstString.size(); i++){
        int j = 0;
        // If the first characters match
        if(firstString[i] == secondString[j]){
            int k = i;
            while (firstString[i] == secondString[j] && j < secondString.size()){
                j++;
                i++;
            }
            if (j == secondString.size())
                return true;
            else // Re-initialize i to its original value
                i = k;
        }
    }
    return false;
}


int print(string in, string out, int i, vector<string>& store){
  
  if(i==in.length()){
    store.push_back(out);
    return 1;
    //cout<<out<<endl;
  }
  
  int digit = in[i] - '0';
  int cnt = 0;
  for(int k=0; k<table[digit].length();k++){
    cnt += print(in, out+table[digit][k], i+1, store);
  }
  
  return cnt;
  
}



int main() {
	
	string in;
	cin>>in;
    vector<string> help;
	string out = "";
	cout<<print(in, out,0, help)<<endl;

        for(int j=0; j<help.size(); j++){
            
                cout<<help[j]<<" ";
            
        }
   
	
	
	return 0;
}