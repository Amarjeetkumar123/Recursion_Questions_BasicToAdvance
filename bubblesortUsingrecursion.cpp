#include<iostream>
using namespace std;
// void bubblesortrec(int*arr,int n,int i){
// 	// base case
// 	if(i==n-1){
// 		return;
// 	}



// 	// recursive case
// 	for(int j=0;j<=n-2;j++){
// 		if(arr[j]>arr[j+1]){
// 			swap(arr[j],arr[j+1]);
// 		}
// 	}
// 	bubblesortrec(arr,n,i+1);

// }

// pure recursion 
void bubblesortrecpure(int*arr,int n,int i,int j){
	// base case
	if(i==n-1){
		return;
	}
	// recursive case
	if(j==n-1){
		bubblesortrecpure(arr,n,i+1,0);


	}
	else{
		if(arr[j]>arr[j+1]){
			swap(arr[j],arr[j+1]);
		}
		bubblesortrecpure(arr,n,i,j+1);

	}


}
int main(){
	
	int arr[]={5,6,7,0,1,2,3};
	int n=sizeof(arr)/sizeof(int);//5

	// bubblesortrec(arr,n,0);
	bubblesortrecpure(arr,n,0,0);
	for (int i = 0; i <n; ++i)
	{
		cout<<arr[i]<<" ";
	}
	cout<<endl;

	// bubble sort-->Brute force approach
	// for(int i=0;i<=n-2;i++){
	// 	for(int j=0;j<=n-2;j++){
	// 	if(arr[j]>arr[j+1]){
	// 		swap(arr[j],arr[j+1]);
	// 	}


	// }

	// }

	return 0;

}