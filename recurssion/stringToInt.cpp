#include<iostream>
#include<cmath>
using namespace std;

int toInteger(const string& str, int count,int&value){
   if(str.length() == 1) {
      value += (str[0] - '0')*pow(10,count);
      return value;
   }
   else{
      value +=(str[str.length()-1] - '0')*pow(10,count);
      
      toInteger(str.substr(0,str.length()-1),count+1,value);
   }
   return value;
}

int main(){
   string str;
   //cout << "Enter String : ";
   cin >> str;
   int count = 0;
   int value = 0;
   int toint = toInteger(str, count, value);
   cout << toint << endl;   
}