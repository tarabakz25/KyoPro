#include <bits/stdc++.h>
using namespace std;
using vec = vector<vector<int>>;
using ll = long long;

#define rep(i, n) for(ll i = 0; i < n; i++)
#define rep2(i, a, n) for(ll i = a; i < n; i++)

int main()
{
    int n, k;
    cin >> n >> k;

    string s;
    cin >> s;

    int ans = 0;

    vector<int> cnts;

    int cnt = 0;
    rep(i, n){
        if(s[i] == 'O') cnt ++;
        if(s[i] == 'X'){
            cnts.push_back(cnt);
            cnt = 0;
        }
    }
    cnts.push_back(cnt);
    for(int i : cnts){
        if(i >= k) ans += i / k;
    }
    cout << ans << endl;
}