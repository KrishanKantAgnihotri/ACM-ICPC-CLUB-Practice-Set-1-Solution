/*
Link to official Editorial : https://codeforces.com/blog/entry/7826
*/
#include <bits/stdc++.h>
using namespace std;
#define ll long long int 
int main()
{
     int n;
    cin >> n;
    string num = to_string(n);
    if (n < 0)
    {
        if (num[num.size()-1] > num[num.size()-2])
        {
            num.erase(num.size()-1, 1);
        } else {
            num.erase(num.size()-2, 1);
        }
    }
    if (num != "-0")
    {
        cout << num;
    } else {
        cout << "0";
    }
}
