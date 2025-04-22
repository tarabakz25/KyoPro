#include <bits/stdc++.h>
#include <chrono>

using namespace std;
using ll = long long;

#define REP(i, n) for (ll i = 0; i < n; i++)
#define REP2(i, a, n) for (ll i = a; i < n; i++)
#define REPR(i, n) for (ll i = n; i >= 0; i--)

int main()
{
    ll r, g, b;
    cin >> r >> g >> b;

    string s;
    cin >> s;

    if(s == "Red"){
        if(g > b) cout << b << endl;
        else cout << g << endl;
    }
    else if(s == "Green"){
        if(r > b) cout << b << endl;
        else cout << r << endl;
    }
    else{
        if(r > g) cout << g << endl;
        else cout << r << endl;
    }   
}