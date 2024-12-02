#include <bits/stdc++.h>
using namespace std;
using vec = vector<vector<int>>;
using ll = long long;

#define rep(i, n) for(ll i = 0; i < n; i++)
#define rep2(i, a, n) for(ll i = a; i < n; i++)

int main()
{
    ll n, m;
    cin >> n >> m;

    ll ans = 0;
    ll total = n * n;

    vector<pair<ll, ll>> arr;
    rep(q, m){
        ll i, j;
        cin >> i >> j;

        i--; j--;

        arr.push_back(make_pair(i, j));

        if(i+2 < n && j+1 < n) arr.push_back(make_pair(i+2, j+1));
        if(i+1 < n && j+2 < n) arr.push_back(make_pair(i+1, j+2));
        if(i-1 >= 0 && j+2 < n) arr.push_back(make_pair(i-1, j+2));
        if(i-2 >= 0 && j+1 < n) arr.push_back(make_pair(i-2, j+1));
        if(i-2 >= 0 && j-1 >= 0) arr.push_back(make_pair(i-2, j-1));
        if(i-1 >= 0 && j-2 >= 0) arr.push_back(make_pair(i-1, j-2));
        if(i+1 < n && j-2 >= 0) arr.push_back(make_pair(i+1, j-2));
        if(i+2 < n && j-1 >= 0) arr.push_back(make_pair(i+2, j-1));
    }

    sort(arr.begin(), arr.end());

    arr.erase(unique(arr.begin(), arr.end()), arr.end());

    cout << total - arr.size() << endl;
}
