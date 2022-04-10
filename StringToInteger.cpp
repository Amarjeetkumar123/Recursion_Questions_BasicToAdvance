// Input -> "2358"  -> output -> 2358

#include<iostream>
using namespace std;
int StringToInteger(string s, int l){
    // base case
    if(l==0)
    return 0;

    // recursive case
    return s[l-1]-'0' + StringToInteger(s , l-1)*10;

}
int main(){

     string s;
     cin>>s;
    
     cout<<StringToInteger(s,s.length());
    return 0;
}
