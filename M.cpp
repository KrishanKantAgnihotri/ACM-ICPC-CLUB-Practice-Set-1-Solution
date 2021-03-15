/* There are two cases.

Case 1: There have only even number. In this case answer is "-1". Cause for making the even number odd by adding another number, we need a odd number (we can make even number odd by only adding a odd number with that even number)

case 2: In this case there must have a odd number. Then for every even number, we can add a odd number with the target even number. And make every even number odd by one operation. Thus number of even number = minimum operation to make all odd.        
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
