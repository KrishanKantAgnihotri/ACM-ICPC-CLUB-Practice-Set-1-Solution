#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
int t;
cin>>t;
//t = 1;
while(t--)
{
 ll n;
 cin>>n;
 ll p = 1 ; 
 vector<ll>  ans ;
 while(n){
     if(n%10)
     ans.push_back(p*(n%10));
     n/=10;
     p*=10;
 }
 cout<<ans.size()<<endl;
 for(auto it: ans)
 cout<<it<<" ";
 cout<<endl;
}
}
