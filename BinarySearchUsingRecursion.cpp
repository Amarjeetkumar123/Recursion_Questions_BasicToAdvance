#include<iostream>
using namespace std;
int BinarySearch(int *arr , int key , int s , int e){
        // base case
            if(s>e)
            return -1;

        // recursive case

        int mid = (s+e)/2;

        if(arr[mid]==key)
            return mid;

        else if(key > arr[mid])
           return BinarySearch(arr,key,mid+1,e);
        
        else
           return BinarySearch(arr,key,s,mid-1);
        
}
int main(){

    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    cin>>arr[i];
    cout<<"Enter key to search : "<<endl;
    int key; cin>>key;
   cout<< BinarySearch(arr,key,0,n-1);

    return 0;
}