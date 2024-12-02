#include <bits/stdc++.h>
using namespace std;
using vec = vector<vector<int>>;
using ll = long long;

#define rep(i, n) for(ll i = 0; i < n; i++)
#define rep2(i, a, n) for(ll i = a; i < n; i++)

int main()
{
    ll n;
    cin >> n;

    ll amax = LLONG_MIN;
    ll bmax = LLONG_MIN; 

    rep(i, n){
        ll a;
        cin >> a;

        amax = max(amax, a);
    }
    rep(i, n){
        ll b;
        cin >> b;

        bmax = max(bmax, b);
    }

    cout << amax + bmax << endl;
}