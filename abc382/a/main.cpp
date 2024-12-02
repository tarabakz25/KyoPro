#include <bits/stdc++.h>
using namespace std;
using ll = long long;

#define REP(i, n) for(ll i = 0; i < n; i++)
#define REP2(i, a, n) for(ll i = a; i < n; i++)
#define REPR(i, n) for(ll i = n; i >= 0; i--)

int main() 
{
    ll n, d;
    cin >> n >> d;

    string s;
    cin >> s;

    ll cnt = 0;

    REP(i, s.length()){
        if(s[i] == '.') cnt ++;
    } 

    cout << cnt + d << endl;
}