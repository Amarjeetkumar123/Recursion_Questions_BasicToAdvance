#include<iostream>
using namespace std;
int Multiplyn1andn2(int n1 , int n2){
    // base case
    if(n2==0)
    return 0;

    // recursive case

    return n1 + Multiplyn1andn2(n1 , n2-1);
}
int main(){

    int n1 , n2;
    cin>>n1>>n2;
    cout<<"Multiply of two numbers is "<<Multiplyn1andn2(n1,n2)<<endl;
    return 0;
}