#include<iostream>
using namespace std;
int main() {
	string s;
	cin>>s;
	string s1;
	int n = s.length();
	int ansIndex = 0;
	int i = 0;
	while(i<n){

		int j = i+1;
		while(j<n && s[i]==s[j]){
			j++;
		}
		s1[ansIndex++] = s[i];
		int count = j-i;

		if(count > 1){
			string cnt = to_string(count);
			for(char ch: cnt)
			s1[ansIndex++] = ch;
		}
		i=j;
	}

	cout<<s1;
	
	return 0;
}