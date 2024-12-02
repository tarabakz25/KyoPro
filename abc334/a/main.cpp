#include <bits/stdc++.h>
using namespace std;
using vec = vector<vector<int>>;

#define rep(i, n) for(int i = 0; i < n; i++)
#define rep2(i, a, n) for(int i = a; i < n; i++)

int main()
{
    int b, g;
    cin >> b >> g;

    if(b > g) cout << "Bat" << endl;
    else cout << "Glove" << endl;
}