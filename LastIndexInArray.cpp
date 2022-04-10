#include<iostream>
using namespace std;

int lastIndex(int *arr , int n , int i, int key){

    // base case
    if(i==0)
    return -1;

    // recursive case

    if(arr[i]==key)
    return i;

    return lastIndex(arr,n,i-1,key);
}

int main(){

    int n; cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    cin>>arr[i];

    int key; cin>>key;
    cout<<lastIndex(arr,n,n,key);

    return 0;
}