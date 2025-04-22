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
    string s;
    cin >> n >> s;

    vector<ll> a;
    REP(i, n){
        if(s[i] == '1') a.push_back(i);
    }

    vector<ll> costs(n - a.size() + 1, 0);

    REP(i, n-a.size()+1){
        REP(j, a.size()){
            costs[i] += abs(i+j-a[j]);
        }
    }

    cout << *min_element(costs.begin(), costs.end()) << endl;
}