#include <bits/stdc++.h>
using namespace std;
using vec = vector<vector<int>>;
using ll = long long;

#define rep(i, n) for(int i = 0; i < n; i++)
#define rep2(i, a, n) for(int i = a; i < n; i++)

int main()
{
    int n;
    cin >> n;

    vector<pair<ll, ll>> arr1(n);
    rep(i, n) cin >> arr1[i].first >> arr1[i].second;

    int q;
    cin >> q;

    vector<pair<ll, ll>> arr2(q);
    rep(i, q) cin >> arr2[i].first >> arr2[i].second;

    rep(i, q){
        ll t = arr2[i].first-1, d = arr2[i].second;
        ll q = arr1[t].first, r = arr1[t].second;

        cout << q * (d / q) + r << endl;
    }
}