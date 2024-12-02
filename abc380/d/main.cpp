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

    ll ssize = s.size();
    ll tsize = s.size();

    ll q;
    cin >> q;
    
    vector<ll> arr(q);
    rep(i, q) cin >> arr[i];

    ll Max = *max_element(arr.begin(), arr.end());

    for(ll i = 0; i <= Max; i *= 1){
        tsize = s.size();
        for(ll j = 0; j < tsize; j ++){
            if(s[j] >= 'a' && s[j] <= 'z') s += toupper(s[j]);
            else if(s[j] >= 'A' && s[j] <= 'Z') s += tolower(s[j]);
        }
        i = s.length();
    }

    rep(i, q){
        cout << s[arr[i]-1] << " ";
    }
    cout << endl;
}