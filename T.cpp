/*
For any two integers a, b. The maximum xor value is (a+b). It can be found when there have not any common bit between 'a' and 'b'.

Case 1: If Alice chosen two integer, produce the maximum xor value. Then Alice must be win.

Case 2: In this case there must have some common bit between 'a' and 'b'. Then Bob can easily win, by choose two integer 'c' and 'd', where (c^d) = (a | b).
And it is proven that if have some common bit between 'a' and 'b' then (a | b) must be greater than (a^b).
*/
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
