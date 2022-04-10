#include<iostream>
using namespace std;
int sumofarray(int *arr , int n){
    // base case 
    if(n==0)
    return 0;

    // Recursive case
    return arr[0] + sumofarray(arr+1,n-1);
}

int sumofarray2(int *arr , int n){
    // base case 
    if(n==0)
    return 0;

    // Recursive case
    return arr[n-1] + sumofarray2(arr,n-1);
}

int sumofarray3(int *arr , int n , int i){
    // base case 
    if(i==n)
    return 0;

    // Recursive case
    return arr[i] + sumofarray3(arr,n,i+1);
}
int main(){
    int  n ;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    cin>>arr[i];

    cout<<sumofarray(arr , n)<<endl;
     cout<<sumofarray2(arr , n)<<endl;
      cout<<sumofarray3(arr , n , 0)<<endl;
    return 0;
}