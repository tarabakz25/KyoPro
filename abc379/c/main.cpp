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

    vector<ll> arr1(m);
    vector<ll> arr2(m);
    rep(i, m){
        ll t;
        cin >> t;
        arr1[i] = t-1; 
    }
    rep(i, m) cin >> arr2[i];

    vector<ll> stone(n, 0);
    rep(i, m) stone[arr1[i]] += arr2[i];

    rep(i, m){
        if(stone[i] > 1){
            
        }
    }
    
}