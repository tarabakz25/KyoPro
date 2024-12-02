#include <bits/stdc++.h>
using namespace std;
using vec = vector<vector<int>>;

#define rep(i, n) for(int i = 0; i < n; i++)
#define rep2(i, a, n) for(int i = a; i < n; i++)

int main()
{
    int a = 360;

    int ans = 0;

    for(int i = 1; i <= 360; i ++){
        if(360 % i == 0) ans ++;
    }

    cout << ans << endl;
}