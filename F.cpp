/*
There have 4 sides. Side-0(East), side-1(South), side-2(West), side-3(North).

If we found '1', we have to move left, just decrement the side value. But for 'side-0', we have to move 'side-3'.
Otherwise we found '0', we have to move right, just increment the side value. But for 'side-3', we have to move 'side-0'.
Clearly, final side will be the answer.
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
    ll n;
    cin>>n;
    string s;
    cin>>s;
    ll cnt = 0  ; 
    for(int i = 0 ; i<n ;i++){
        if(s[i]=='1')
            cnt++;
        else
            cnt--;
    }
    unordered_map<int,string> u;
    u[1] = 'N';
    u[2] = 'W';
    u[3] = 'S';
    u[0] = 'E';
   cnt = (cnt%4+4)%4;
   cout<<u[cnt]<<endl;
}
}
