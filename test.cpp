#include<bits/stdc++.h>
using namespace std;

bool kyamainumdaalsaktihunyanahi(int mat[9][9],int i,int j,int num,int n){
	// to check row
	for(int l=0;l<n;l++){
		if(mat[i][l]==num){
			return false;
		}
	}

	 // to check col
	for(int m=0;m<n;m++){
		if(mat[m][j]==num){
			return false;
		}
	}

	// to check square matrix
	int srt=sqrt(n);//3
	int starti=(i/srt)*srt;
	int startj=(j/srt)*srt;

	for(int si=starti;si<starti+srt;si++){
		for(int sj=startj;sj<startj+srt;sj++){
			if(mat[si][sj]==num){
				return false;
			}
		}
	}


	return true;



}

bool sudukosolver(int mat[9][9],int i,int j,int n){
	// base case
	if(i==n){
		for(int l=0;l<n;l++){
			for(int m=0;m<n;m++){
				cout<<mat[l][m]<<" ";
			}
			cout<<endl;
		}
		return true;
	}
	

	 if(j==n){
		return sudukosolver(mat,i+1,0,n);
	}

	if(mat[i][j]!=0){
		return sudukosolver(mat,i,j+1,n);
	}


	// recursive case
	for(int num=1;num<=n;num++){
		if(kyamainumdaalsaktihunyanahi(mat,i,j,num,n)){
		mat[i][j]=num;
		bool kyaaageseansmila=sudukosolver(mat,i,j+1,n);
		if(kyaaageseansmila==true){
			return true;
		}
		mat[i][j]=0;


	}

	}
	return false;


}


int main() {
	int n;
	int mat[9][9];

	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++){
			cin>>mat[i][j];
		}
	}

	sudukosolver(mat,0,0,9);

	return 0;
}