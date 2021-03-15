#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
int t;
t = 1;
cin>>t;
while(t--){
	string s;
	cin>>s;
	for(int i = 0 ;i <s.length()-1 ;i+=2){
		swap(s[i],s[i+1]);
	}
	cout<<s<<endl;

}
}
