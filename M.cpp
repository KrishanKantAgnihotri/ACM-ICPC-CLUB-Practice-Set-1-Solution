         
#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
int t;
t = 1; 
cin>>t;
while(t--){
    ll n;
    cin>>n;
    ll od = 0  ; 
    for(int i = 0 ;i<n ;i++){
        ll num;
        cin>>num;
        if(num&1)
            od++;
    }
    if(od==0){
        cout<<-1<<endl;
        continue;
    }
    else{
        cout<<(n-od)<<endl;
    }
}
}
