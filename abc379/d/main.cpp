#include <bits/stdc++.h>
using namespace std;
using vec = vector<vector<int>>;
using ll = long long;

#define rep(i, n) for(ll i = 0; i < n; i++)
#define rep2(i, a, n) for(ll i = a; i < n; i++)

int main()
{
    ll q;
    cin >> q;

    vector<ll> arr;

    rep(i, q){
        ll n;
        cin >> n;

        if(n == 1){
            arr.push_back(0);
        }
        else if(n == 2){
            ll t;
            cin >> t;

            rep(j, arr.size()){
                arr[j] += t;
            }
        }
        else{
            ll h;
            cin >> h;

            ll cnt = 0;

            rep(j, arr.size()){
                if(arr[j] >= h){
                    cnt ++;
                    arr.erase(arr.begin()+j);
                    j --;
                }
            }

            cout << cnt << endl;
        }
    }
}