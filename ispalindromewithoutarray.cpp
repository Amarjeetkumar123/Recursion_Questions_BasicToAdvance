// example : 123321 -> palindrome

#include<iostream>
using namespace std;

int reverse(int n , int num2){
    // base case
    if(n==0)
    return num2;

    // recursive case
    int digit = n%10;
    num2 = num2*10 + digit;

    return reverse(n/10,num2);
}
int main(){
    int n;
    cin>>n;
    int num2=0;
    
    num2=reverse(n , 0);
    // cout<<num2<<endl;
    if(n==num2)
    cout<<"palindrome";
    else
    cout<<"not palindrome";
    return 0;
}