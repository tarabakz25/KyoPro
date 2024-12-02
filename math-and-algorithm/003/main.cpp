#include <bits/stdc++.h>
using namespace std;
using vec = vector<vector<int>>;
using ll = long long;

#define rep(i, n) for(ll i = 0; i < n; i++)
#define rep2(i, a, n) for(ll i = a; i < n; i++)

int main()
{
    int n;
    cin >> n;

    int total = 0;
    rep(i, n){
        int t;
        cin >> t;
        total += t;
    }

    cout << total << endl;
}