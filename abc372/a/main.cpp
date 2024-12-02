#include <bits/stdc++.h>
using namespace std;
using vec = vector<vector<int>>;
using ll = long long;

#define rep(i, n) for(ll i = 0; i < n; i++)
#define rep2(i, a, n) for(ll i = a; i < n; i++)

int main()
{
    string s;
    cin >> s;

    string ans = "";
    rep(i, s.length()){
        if(s[i] == '.') continue;
        else ans += s[i];
    }

    cout << ans << endl;
}