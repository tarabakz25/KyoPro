#include <bits/stdc++.h>
using namespace std;
using vec = vector<vector<int>>;

#define rep(i, n) for(int i = 0; i < n; i++)
#define rep2(i, a, n) for(int i = a; i < n; i++)

int main()
{
    int n, s, k;
    cin >> n >> s >> k;

    int cost = 0;

    rep(i, n){
        int p, q;
        cin >> p >> q;

        cost += p * q;
    }

    if(cost >= s) cout << cost << endl;
    else cout << cost + k << endl;
}