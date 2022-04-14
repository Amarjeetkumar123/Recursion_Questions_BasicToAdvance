// Recursion
// Example : 5 -> 1 2 3 4 5 (increasing order)      &   5 -> 5 4 3 2 1 (decreasing order)

#include<iostream>
using namespace std;
// void Decreasing(int n){

//     if(n==0)
//     return;

//     cout<<n<<endl;
//     Decreasing(n-1);
// }

void Increasing(int n){
    if(n==0)
    return;

    Increasing(n-1);
    cout<<n<<endl;
}

int main(){

    int n;
    cin>>n;

    // Decreasing(n);
    Increasing(n);

    return 0;
}