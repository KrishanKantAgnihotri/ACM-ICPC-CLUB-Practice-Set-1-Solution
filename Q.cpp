/*
A Team can be formed by two ways. By one student Or by two students.

Way 1: For Those students skill at least k, every student can form a team.

Way 2: Firstly take the student of maximum skill. Then take the student with minimum skill, as if (1st student skill + 2nd student skill)≥k. And Both students were not included in any team before.
Continue this case to form as much team as possible.  
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
ll n,k;
cin>>n>>k;
vector<int> v(n);
for(int i = 0 ;i<n ;i++){
    cin>>v[i];
}
sort(v.begin(),v.end());
ll l = 0 ; 
ll r= n- 1;
ll cnt = 0 ;  
while(l<=r){
if(l==r){
    if(v[l]>=k)
    cnt++;
break;
}
if(v[r]>=k)
cnt++,r--;
else if(v[r]+v[l]>=k)
cnt++,l++,r--;
else
l++;
    
}
cout<<cnt<<endl;

}
}
