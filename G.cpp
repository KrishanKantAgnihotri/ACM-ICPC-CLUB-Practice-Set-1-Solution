       
#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
int t;
//cin>>t;
t = 1 ; 
while(t--){
ll n;
cin>>n ;
ll k ;
cin>>k ; 
set<ll> s;
for(int i  = 0 ; i<k ;i++)
{
    ll nm ; 
    cin>>nm;
    s.insert(nm);
}
//cout<<s.size()<<" "<<n<<endl;
if(s.size()+1==n){
    cout<<"yes"<<endl;
}
else
cout<<"no"<<endl;
}

}
