#include <bits/stdc++.h>
using namespace std;
using vec = vector<vector<int>>;

#define rep(i, n) for(int i = 0; i < n; i++)
#define rep2(i, a, n) for(int i = a; i < n; i++)

int main()
{
    vector<string> arr(8);
    rep(i, 8) cin >> arr[i];

    vector<int> tate{1, 2, 3, 4, 5, 6, 7, 8};
    vector<int> yoko{1, 2, 3, 4, 5, 6, 7, 8};
    rep(i, 8) rep(j, 8){
        if(arr[i][j] == '#') tate.erase(remove(tate.begin(), tate.end(), i+1), tate.end());
    }
    rep(j, 8) rep(i, 8){
        if(arr[i][j] == '#') yoko.erase(remove(yoko.begin(), yoko.end(), j+1), yoko.end());
    }

    int ans = tate.size() * yoko.size();

    cout << ans << endl;
}