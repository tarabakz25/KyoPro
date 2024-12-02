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
    
    rep(i, 11){
        for(ll j = 0; j < (n % 3); j++){
            arr.push_back(j);
        }
        n /= 3;
    }

    cout << arr.size() << endl;
    for(auto i : arr) cout << i << " ";
}