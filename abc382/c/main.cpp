#include <bits/stdc++.h>
using namespace std;
using ll = long long;

#define REP(i, n) for(ll i = 0; i < n; i++)
#define REP2(i, a, n) for(ll i = a; i < n; i++)
#define REPR(i, n) for(ll i = n; i >= 0; i--)

int main()
{
    ll n, m;
    cin >> n >> m;

    map<ll, vector<ll>> human(n);
    vector<ll> sushi(m);

    REP(i, n){
        ll t;
        cin >> t;
        human[t] = i+1;
    }
    REP(i, m) cin >> sushi[i];

    REP(i, m){
        if(human.find(sushi[i]) != human.end()){
            cout << *min_element(human[sushi[i]].begin(), human[sushi[i]].end()) << endl;
        }
        else if(){

        }
        else{
            cout << -1 << endl;
        }
    }
}