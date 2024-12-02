#include <bits/stdc++.h>
using namespace std;
using vec = vector<vector<int>>;
using ll = long long;

#define rep(i, n) for(int i = 0; i < n; i++)
#define rep2(i, a, n) for(int i = a; i < n; i++)

int main()
{
    ll a, m, l, r;
    cin >> a >> m >> l >> r;

    l -= a;
    r -= a;

    auto floor = [](ll a, ll b){
        ll r = (a % b + b) % b;
        return (a - r) / b;
    };

    ll total_cost = floor(r, m) - floor((l - 1), m);

    cout << total_cost << endl;
}