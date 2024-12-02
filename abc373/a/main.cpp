#include <bits/stdc++.h>
using namespace std;
using vec = vector<vector<int>>;
using ll = long long;

#define rep(i, n) for(ll i = 0; i < n; i++)
#define rep2(i, a, n) for(ll i = a; i < n; i++)

int main()
{
    int ans  = 0;
    rep(i, 12){
        string s;
        cin >> s;

        if(s.length() == i+1) ans ++;
    }

    cout << ans << endl;
}