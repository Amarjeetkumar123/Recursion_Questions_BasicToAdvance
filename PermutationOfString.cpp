// input -> abc
// outpur -> abc,acb,bac,bca,cab,cba

#include<iostream>
using namespace std;
void permutationOfString(char *arr , int i){
    // base case
    if(arr[i]=='\0'){
        cout<<arr<<endl;
        return;
    }
    

    // recursive case

    for(int j=i;arr[j]!='\0';j++){
        swap(arr[i],arr[j]);
        permutationOfString(arr,i+1);
        swap(arr[i],arr[j]);
    }
}
int main(){
    char arr[10];
    cin>>arr;

    permutationOfString(arr,0);

    return 0;
}