#include <bits/stdc++.h>
using namespace std;
using vec = vector<vector<int>>;
using ll = long long;

#define rep(i, n) for(ll i = 0; i < n; i++)
#define rep2(i, a, n) for(ll i = a; i < n; i++)

int main()
{
    int n, s;
    cin >> n >> s;

    int total = 0;
    rep2(i, 1, n+1){
        bool flag = 0;
        rep2(j, 1, n+1){
            if(i + j <= s) total ++;
        }
    }
    cout << total << endl;
}