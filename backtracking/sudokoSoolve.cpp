#include <iostream>
#include<cmath>
using namespace std;
//Let's code sudoko solver


bool canPlace(int matrix[][9],int number,int i,int j,int n){

    //Check for row and column
    for(int col=0;col<n;col++){
        if(matrix[i][col]==number || matrix[col][j]==number)
        return false;
    }
    //check for its grid.

    //
    int rn=sqrt(n);
    int sx=(i/rn)*rn;
    int sy=(j/rn)*rn;

    for(int x=sx;x<sx+rn;x++){
        for(int y=sy;y<sy+rn;y++){
            if(matrix[x][y]==number)
            return false;
        }
    }
    
//If all above conditions does not satisfies.
    return true;

}

bool solveSudoko(int matrix[][9],int i,int j,int n){
    //think of base case
    if(i==n){
    //PRINT THE MATRIX
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<matrix[i][j]<<" ";
        }
        cout<<endl;
    }
    
    return true;

    }

    //where to return ;
    //Case when column ends;
    //Although its a recursive case we have to handle it separately.
    if(j==n){
        return solveSudoko(matrix,i+1,0,n);
    }
    //handle this case separately.
    if(matrix[i][j]!=0)
    return solveSudoko(matrix,i,j+1,n);

    //Recursive case
    bool ans;
    for(int number=1;number<=n;number++){
        if(canPlace(matrix,number,i,j,n)){
            
            matrix[i][j]=number;
            ans=solveSudoko(matrix,i,j+1,n);

            if(ans==true)
            return true;

        }
    }
    //Backtracking 

    matrix[i][j]=0; 
    return false;
   


} 


int main() {
    int N;
    
    cin>>N;
    int matrix[9][9];
    for(int i=0;i<N;i++){
        for(int j=0;j<N;j++){
            cin>>matrix[i][j];
        }
    }
    solveSudoko(matrix,0,0,N);

}

