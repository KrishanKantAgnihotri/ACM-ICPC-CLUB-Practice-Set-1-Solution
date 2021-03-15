#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
int t;
t = 1;
cin>>t;
while(t--){
    ll a,b;
    cin>>a>>b;
    if((a^b)==(a+b))
        cout<<"No\n";
    else
        cout<<"Yes\n";

}

}
