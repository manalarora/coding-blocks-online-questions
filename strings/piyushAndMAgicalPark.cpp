#include<iostream>
using namespace std;
int main() {
  int n,m,k,s;
  cin>>n>>m>>k>>s;
  char arr[n][m];
  for(int i=0;i<n;i++)
  {
    for(int j=0;j<m;j++)
    {
      cin>>arr[i][j];
    }
  }
  int max1=s;
  for(int i=0;i<n;i++)
  { if(max1<=0)break;
    for(int j=0;j<m;j++)
    {
      if(max1<=0){
        break;
      }
      else if(arr[i][j]=='.'&&j==m-1)
      {
        max1=max1-2;

      }
      else if(arr[i][j]=='.' && j<m-1)
      {
          max1=max1-3;
      }
       else if(arr[i][j]=='*' && j==m-1)
      {
        max1=max1+5;
        
      }
      else if(arr[i][j]=='*' && j<m-1)
      {
          max1=max1+4;
      }
       else if(arr[i][j]=='#')
      { 
         break;
      }
    }
  }
  if(max1>=k)
  {
    cout<<"Yes"<<endl;
    cout<<max1<<endl;
  }
  else{
      cout<<"No"<<endl;
  }
	return 0;
}