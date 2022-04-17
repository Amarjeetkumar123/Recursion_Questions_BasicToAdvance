#include<iostream>
using namespace std;
void mergetwosortedarrays(int*arr1,int n1,int*arr2,int n2){
	int temp[10000];
	int i=0,j=0,k=0;


// loop
	while(j<n2&&i<n1){
		if(arr1[i]<arr2[j]){
		temp[k]=arr1[i];
		i++;
		k++;

	}
	else{
		temp[k]=arr2[j];
		k++;
		j++;

	}

	}
	// agar j==n2 tou abhi arr1 bacha huva hai
	// mujhe copy karne hai arr 1 k remaining elements temp mai 
	
	// loop
	while(i<n1){
		temp[k]=arr1[i];
	i++;
	k++;

	}

	while(j<n2){
		temp[k]=arr2[j];
		j++;
		k++;
	}


	for(int i=0;i<k;i++){
		cout<<temp[i]<<" ";
	}
	cout<<endl;


	




	

}

int main(){
	int arr1[]={2,4,8};
	int n1=sizeof(arr1)/sizeof(int); //3
	int arr2[]={1,3};
	int n2=sizeof(arr2)/sizeof(int);//2
	mergetwosortedarrays(arr1,n1,arr2,n2);
	
	
	return 0;

}