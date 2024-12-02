#include <bits/stdc++.h>
using namespace std;
using ll = long long;

#define REP(i, n) for(ll i = 0; i < n; i++)
#define REP2(i, a, n) for(ll i = a; i < n; i++)
#define REPR(i, n) for(ll i = n; i >= 0; i--)

int main()
{
    int n, m;
    cin >> n >> m;

    vector<ll> arr(n, 1);

    while(1){
        string ans = "";
        REP(i, n){
            ans += to_string(arr[i]);
            ans += " ";
        }
        ans.pop_back();
        cout << ans << endl;

        REPR(i, n-1){
            if(arr[i]+1 == m){
                if(arr[i]+1 == )
            }
        }
    }
}