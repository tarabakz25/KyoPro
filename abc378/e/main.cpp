#include <bits/stdc++.h>
using namespace std;
using vec = vector<vector<int>>;
using ll = long long;

#define rep(i, n) for(int i = 0; i < n; i++)
#define rep2(i, a, n) for(int i = a; i < n; i++)

int main()
{
    ll n, m;
    cin >> n >> m;

    ll total = 0;

    vector<ll> arr(n);
    rep(i, n){
        cin >> arr[i];
        total += arr[i];
    }

    ll ans = 0;

    for(ll i = 1; i < n; i ++){
        for(ll j = 0; j < n - i; j ++){
            ans += accumulate(arr.begin() + j, arr.begin() + j + i, 0);
        }
    }

    cout << ans << endl;
}