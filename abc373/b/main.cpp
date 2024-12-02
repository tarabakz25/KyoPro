#include <bits/stdc++.h>
using namespace std;
using vec = vector<vector<int>>;
using ll = long long;

#define rep(i, n) for(ll i = 0; i < n; i++)
#define rep2(i, a, n) for(ll i = a; i < n; i++)

int main()
{
    string s;
    cin >> s;

    string key = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";

    map<char, ll> cnt;

    int ans = 0;
    rep(i, s.length()){
        cnt[s[i]] = i;
    }

    rep2(i, 1, key.length()){
        ans += abs(cnt[key[i]] - cnt[key[i-1]]);
    }

    cout << ans << endl;
}