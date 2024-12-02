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

    int cnt = 0;
    rep(i, s.length()){
        if(i == 0) continue;

        if(s[i] == '|'){
            cout << cnt << endl;
            cnt = 0;
        }
        else cnt ++;
    }
}