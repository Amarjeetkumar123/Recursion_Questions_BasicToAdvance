#include<iostream>
using namespace std;

void mergetwosortedarrays(int *arr,int s,int e){
	int i=s;
	int mid=(s+e)/2;

	int j=mid+1;
	int temp[10000];
	int k=s;

while(i<=mid&&j<=e){
	if(arr[i]<arr[j]){
		temp[k]=arr[i];
		i++;
		k++;
	}
	else{
		temp[k]=arr[j];
		k++;
		j++;
	}


}
while(j<=e){
	temp[k]=arr[j];
	k++;
	j++;

}
while(i<=mid){
	temp[k]=arr[i];
	k++;
	i++;

}


for(int i=s;i<=e;i++){
	arr[i]=temp[i];
}

	
}

void mergesort(int *arr,int s,int e){
	// base case
	if(s>=e){
		return;
	}


	// recursive case
	// 3 step
	// 1.divide
	int mid=(s+e)/2;


	// 2 sort
	mergesort(arr,s,mid);//4 1 2 --> 1 2 4
	mergesort(arr,mid+1,e);//5 3 --> 3 5



	// 3. merge
	mergetwosortedarrays(arr,s,e);

}

int main(){
	int arr[]={4,1,2,5,3,3,3,9,0};
	int n=sizeof(arr)/sizeof(int);
	mergesort(arr,0,n-1);

	for (int i = 0; i <n; ++i)
	{
		cout<<arr[i]<<" ";
	}
	cout<<endl;



	
	
	return 0;

}