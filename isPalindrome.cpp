#include<iostream>
using namespace std;
bool ispalindrome(int *arr , int i , int j){
    // base case
    if(i>j)
    return true;

    // recursive case
    if(arr[i]!=arr[j]){
        return false;
    }
    else{
       return ispalindrome(arr , i+1 , j-1);
    }
}
int main(){
    int n; cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    cin>>arr[i];

    if(ispalindrome(arr,0,n-1))
    cout<<"palindrome";
    else
    cout<<"not palindrome";
    return 0;
}