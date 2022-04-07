// Using recursion..

#include<iostream>
using namespace std;
bool CheckSortOrNot(int *arr ,int i, int n){
    // Taking ending element and comparing starting two element

    // // Base case
    // if(n==1)
    // return true;
    // // Recursive case
    // if(arr[0]<=arr[1] && CheckSortOrNot(arr+1,n-1))
    // return true;
    // else
    // return false;


    // take end element
    // if(n==1)
    // return true;

    // if(arr[n-2]<=arr[n-1] && CheckSortOrNot(arr,n-1))
    // return true;

    // return false;

    // Using Itreator.
   

    if(i==n-1)
    return true;

    if(i<n &&arr[i]<=arr[i+1]&&CheckSortOrNot(arr,i+1,n))
    return true;

    return false;


}
int main(){

    int n; 
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    cin>>arr[i];

    cout<<CheckSortOrNot(arr,0,n);

    return 0;
}