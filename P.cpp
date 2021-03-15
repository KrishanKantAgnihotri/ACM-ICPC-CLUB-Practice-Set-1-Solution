 		
#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
int t;
t = 1;
//cin>>t;
while(t--){
	ll n,k;
	cin>>n>>k;
	if(n==k){
		cout<<"YES\n";
		return 0;
	}
	ll num = n/k;
	if(num&1)
		cout<<"YES\n";
	else
		cout<<"NO\n";

}
}
