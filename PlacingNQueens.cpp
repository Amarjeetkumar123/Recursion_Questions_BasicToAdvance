#include<iostream>
using namespace std;
bool kyamaiqueenplacekarsktihunyanahi(int board[][20],int n,int i,int j){
	// horizantally check
	for(int l=0;l<n;l++){
		if(board[i][l]==1){
			return false;
		}
	}


	// vertically check
	for(int k=0;k<n;k++){
		if(board[k][j]==1){
			return false;
		}
	}


	// right diagonal
	int u=i;
	int v=j;
// loop
	while(i>=0&&j>=0){
		if(board[i][j]==1){
		return false;
	}
	i--;//1
	j--;//1

	}
	// i-->-1
	// j-->-1


	// left diagonal
	while(u>=0&&v<n){
		if(board[u][v]==1){
		return false;
	}
	u--;//1
	v++;//1

	}

	return true;



}
bool nqueen(int board[][20],int n,int i , int &count){
	// base case
	if(i==n){
		// for(int l=0;l<n;l++){
		// 	for(int m=0;m<n;m++){
		// 		cout<<board[l][m]<<" ";

		// 	}
		// 	cout<<endl;
		// }
		// return true;
		// cout<<endl;cout<<endl;
         count = count + 1;
        
		return false;

	}


	// recursive case
	for(int j=0;j<n;j++){
		if(kyamaiqueenplacekarsktihunyanahi(board,n,i,j)){
		board[i][j]=1;
		bool kyaaageseansmila=nqueen(board,n,i+1 , count);
		if(kyaaageseansmila==true){
			return true;

		}
		board[i][j]=0;


	}

	}
	return false;




}
int main(){
	int board[20][20]={0};

	int n;
	cin>>n;//4
    int count = 0;
	nqueen(board,n,0 , count);

    cout<<count;


	return 0;
} 