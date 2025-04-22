#include <bits/stdc++.h>
#include <chrono>

using namespace std;
using ll = long long;

#define REP(i, n) for (ll i = 0; i < n; i++)
#define REP2(i, a, n) for (ll i = a; i < n; i++)
#define REPR(i, n) for (ll i = n; i >= 0; i--)

int main()
{
    ll n;
    cin >> n;

    ll S = 0;
    ll T = 0;

    vector<pair<ll, ll>> LR(n);

    REP(i, n){
        ll a, b;
        cin >> a >> b;
        LR[i] = {a, b};
        S += a;
        T += b;
    }

    if(S > 0 || T < 0){
        cout << "No" << endl;
        return 0;
    }
    else cout << "Yes" << endl;

    S *= -1;

    REP(i, n){
        ll x = LR[i].first + min(LR[i].second - LR[i].first, S);
        S -= min(LR[i].second - LR[i].first, S);
        cout << x << endl;
    }
}