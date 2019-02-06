#include <iostream> 
using namespace std;

bool rat (char maze[1000][1000],int sol[1000][1000],int i,int j,int m,int n)
{
if(i==m && j==n)
{
sol[m][n]=1;
for(int i=0;i<=m;i++)
{
for(int j=0;j<=n;j++)
cout<<sol[i][j]<<" ";
cout<<endl;
}

	return true;
}

if(i>m ||j>n)
	return false;
if(maze[i][j]=='X')
	return false;

sol[i][j]=1;

bool right=rat(maze,sol,i,j+1,m,n);
bool down;
if(right==false){
 down=rat(maze,sol,i+1,j,m,n);}
sol[i][j]=0;

if(right || down)
	return true;

return false;
}

int main()
{
int m,n;
cin>>m>>n;

char maze[1000][1000];
for(int i=0;i<m;i++)
	{
		for(int j=0;j<n;j++)
			cin>>maze[i][j];
	}
int sol[1000][1000]={0};
bool ans=rat(maze,sol,0,0,m-1,n-1);	

if(ans==false)
	cout<<"-1";
return 0;
}