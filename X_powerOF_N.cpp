// X^N using recursion (less itration)

// Example : 3^11 -> 177147


#include<iostream>
using namespace std;
int powerXtoN(int x , int n){
    // base case
    if(n==0)
    return 1;

    if(n==1)
    return x;

    // recursive case

    int ans = powerXtoN(x,n/2);

    if(n%2==0)     // N is even
    return ans*ans;
    else        // n is odd
    return x * ans * ans;

}
int main(){

    int x;
    cin>>x;
    int n;
    cin>>n;

   cout<< powerXtoN(x,n);

    return 0;
}