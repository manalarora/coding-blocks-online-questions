 #include <iostream>
using namespace std;

void stringBreakdown(string str){
for(int i=0; i<str.size();i++){
    if(isupper(str[i])){
        if(i!=0)cout<<endl;
        cout<<str[i];
    }
    else{
        cout<<str[i];
    }
}
}


int main() {
    string str;
    cin>>str;
    stringBreakdown(str);
    
    //cout<<"Hello World!";
}
