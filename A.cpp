#include<bits/stdc++.h>
using namespace std;
#define ll long long 
int main(){
  int t;
  t = 1;
  while(t--){
    ll c;
    cin>>c;
    string s = "";
    if(c%3==0)
	  s+="Fizz";
    if(c%5==0)
	  s+="Buzz";
    cout<<s<<endl;
  }

}
