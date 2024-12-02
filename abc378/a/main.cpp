#include <bits/stdc++.h>
using namespace std;
using vec = vector<vector<int>>;

#define rep(i, n) for(int i = 0; i < n; i++)
#define rep2(i, a, n) for(int i = a; i < n; i++)

int main()
{
    vector<int> color(4);
    rep(i, 4) cin >> color[i];

    sort(color.begin(), color.end());

    if(color[0] == color[1] && color[2] == color[3]) cout << 2 << endl;
    else if(color[0] == color[1] || color[2] == color[3] || color[1] == color[2]) cout << 1 << endl;
    else cout << 0 << endl;
}