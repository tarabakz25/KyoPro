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

    vector<ll> arr(n);
    rep(i, n) cin >> arr[i];

    set<ll> s(arr.begin(), arr.end());

    rep(i, n){
        if(s.count(arr[i]+3) && s.count(arr[i]+6)){
            cout << "Yes" << endl;
            return 0;
        }
    }

    cout << "No" << endl;
    return 0;
}