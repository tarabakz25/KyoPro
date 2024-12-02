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

    int cnt[3] = {0, 0, 0};

    rep(i, s.length()){
        if(s[i] == '1') cnt[0] ++;
        else if(s[i] == '2') cnt[1] ++;
        else if(s[i] == '3') cnt[2] ++;
    }

    if(cnt[0] == 1 && cnt[1] == 2 && cnt[2] == 3) cout << "Yes" << endl;
    else cout << "No" << endl;
}