#include<bits/stdc++.h>
using namespace std;
#define ll long long 
const int MAXN = 1e6+1;
vector <int> prime;
 bool is_composite[MAXN];

void sieve (int n) {
    fill (is_composite, is_composite + n, false);
     for (int i = 2; i < n; ++i) {
    if (!is_composite[i]) prime.push_back (i);
         for (int j = 0; j < (int)prime.size () && i * prime[j] < n; ++j) {
             is_composite[i * prime[j]] = true;
             if (i % prime[j] == 0) break;
         }
     }
 }
int main(){
    sieve(MAXN);
    int t ;
    t = 1 ;
while(t--){
ll n;
cin>>n;
ll N = 1e6;
unordered_map<ll,bool> m;
for(ll i =2 ;i<=N ;i++){
if(!is_composite[i])
m[i*i]=1;
}
while(n--){
    ll num;
    cin>>num;
    if(m[num]){
        cout<<"YES\n";
    }
    else
        cout<<"NO\n";
}          
}
}

