/*
Link to official Editorial : https://codeforces.com/blog/entry/451
*/ 		
#include<bits/stdc++.h>
using namespace std;
#define ll long long
bool isprime(ll n){
	for(ll i = 2 ;i*i<=n ;i++){
		if(n%i==0){
			return false;
		}
	}
	return true;
}
int main()
{
int t;
t = 1;
//cin>>t;
vector<int> primes;
for(int  i = 2 ;i<=1000 ; i++){
	if(isprime(i))
		primes.pb(i);

}
while(t--){
	ll n,k;
	cin>>n>>k;
	ll cnt = 0 ; 
for(int i = 0 ; i<primes.size()-1 ;i++){
	if(primes[i]+primes[i+1]+1>n)
		break;
	if(cnt>k)
		break;
	if(isprime(primes[i]+primes[i+1]+1))
		cnt++;


}
if(cnt>=k)
	cout<<"YES\n";
else
	cout<<"NO\n";
}
}
