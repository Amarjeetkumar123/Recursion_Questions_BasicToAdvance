// Question : input -> 432   Output -> four three two

#include<iostream>
using namespace std;

void SayDigits(int num , string *arr){

        if(num==0)
        return;

        int digit = num % 10;
        num = num/10;
        

         SayDigits(num,arr);

         cout<<arr[digit]<<" ";       
      
        
}
int main(){
    
    string arr[10] = {"zero","one","two","three","four","five","six","seven","eight","nine"};
    int num;
    cin>>num;

    SayDigits(num , arr);

    return 0;
}