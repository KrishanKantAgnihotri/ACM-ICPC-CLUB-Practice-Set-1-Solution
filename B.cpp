#include<bits/stdc++.h>
using namespace std;
#define ll long long 
int main()
{
int t;
t = 1;
//cin>>t;
while(t--){
	ll n,m;
	cin>>n>>m;
	ll cnt = 0 ; 
for(int  i =0 ; i<n ;i++){
	for(int j = 0 ; j<m ; j++){
		char c;
		cin>>c;
		if(c=='x')
			cnt++;
	}
}
cout<<cnt<<endl;
}
}
