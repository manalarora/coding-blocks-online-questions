#include<iostream>

using namespace std;
int main() {
	 char ch;

    /* Input character from user */
    //printf("Enter any character: ");
    cin>>ch;


    if(ch >= 'A' && ch <= 'Z')
    {
        cout<<"U";
    }
    else if(ch >= 'a' && ch <= 'z')
    {
        cout<<"L";;
    }
    else
    {
        cout<<"I";;
    }
	
	return 0;
}