// Recursion

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