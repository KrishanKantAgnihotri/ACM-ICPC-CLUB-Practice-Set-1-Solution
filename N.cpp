 		
#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
int t;
t = 1;
//cin>>t;
while(t--){
	ll n;
	cin>>n;
	vector<ll> v(n);
	for(int i = 0 ;i<n ;i++)
    cin>>v[i];
	ll sum1 = 1; 
	for(int i = 1 ; i<n-1 ;i++){
		if(v[i]>=v[i-1])
			sum1++;
		else
			break;

	}
	ll sum2 = 1 ; 
	for(int i = n-2 ; i>=0 ;i--){
		if(v[i]>=v[i+1])
			sum2++;
		else
			break;

	}
	//cout<<sum1<<" "<<sum2<<endl;
	cout<<min(n,sum1+sum2)<<endl;

}
}
