#include <bits/stdc++.h>
using namespace std;
using vec = vector<vector<int>>;
using ll = long long;

#define rep(i, n) for(ll i = 0; i < n; i++)
#define rep2(i, a, n) for(ll i = a; i < n; i++)

int main()
{
    ll n, k;
    cin >> n >> k;
    
    string s;
    cin >> s;

    ll cnt = 0;
    ll point = 0;
    ll j = 0;
    bool flag = 0;
    rep(i, n){
        if(s[i] == '1' && !flag){
            cnt++;
            flag = 1;
        }
        else if(s[i] == '0' && flag) flag = 0;

        if(cnt == k-1 && s[i] == '0' && s[i-1] == '1') point = i;

        if(cnt == k && s[i] == '1'){
            swap(s[i], s[point+j]);
            j ++;
        }
    }

    cout << s << endl;
}