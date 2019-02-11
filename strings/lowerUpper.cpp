#include<iostream>

using namespace std;
int main() {
	 char ch;

    /* Input character from user */
    //printf("Enter any character: ");
    cin>>ch;


    if(ch >= 'A' && ch <= 'Z')
    {
        cout<<"UPPERCASE";
    }
    else if(ch >= 'a' && ch <= 'z')
    {
        cout<<"lowercase";;
    }
    else
    {
        cout<<"INVALID";;
    }
	
	return 0;
}