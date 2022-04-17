#include<iostream>
using namespace std;
int staircase(int n , int k){
    // base case
    if(n==0)
    return 1;

    if(n<0)
    return 0;


    // recursive case

    // return staircase(n-1) + staircase(n-2) + staircase(n-3);

    int ans = 0;
    for(int i=1;i<=k;i++){
        ans = ans + staircase(n-i , k);
    }

    return ans;
}
int main(){
    int n; 
    cout<<"Number of staircase : "<<endl;
   cin>>n;
   int k; 
   cout<<"Number of steps : "<<endl;
   cin>>k;
   cout<<"Total ways = "<< staircase(n , k);
}