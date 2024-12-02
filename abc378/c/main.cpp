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

    map<ll, ll> cnt;

    rep(i, n){
        ll t;
        cin >> t;

        if(cnt[t] < 1) cout << -1 << endl;
        else cout << cnt[t] << endl;;

        cnt[t] = i+1;
    }
}