 		
#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
int t;
t = 1;
cin>>t;
ll ans = 0 ; 
while(t--){
	ll a,b;
	cin>>a>>b;
	ans+=(b-a)*(b-a);

}
cout<<fixed<<setprecision(10)<<sqrtl(ans)<<endl;
}
