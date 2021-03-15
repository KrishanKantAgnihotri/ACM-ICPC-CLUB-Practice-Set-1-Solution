 		
#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
int t;
t = 1;
//cin>>t;
while(t--){
	string a,b;
	cin>>a>>b;
	ll cnt = 4 ; 
	ll ans1 = 0 ; 
	ll ans2 = 0 ; 
	while(cnt!=1){
		ll i,j;
		cin>>i>>j;
		ans1+=(i*cnt);
		ans2+=(j*cnt);
	cnt--;
	}
	if(ans1>ans2)
		cout<<a<<endl;
	else
		cout<<b<<endl;

}
}
