#include <bits/stdc++.h>
using namespace std;
using vec = vector<vector<int>>;

#define rep(i, n) for (int i = 0; i < n; i++)
#define rep2(i, a, n) for (int i = a; i < n; i++)

int main()
{
    int n, m;
    cin >> n >> m;

    vector<vector<char>> arr(n, vector<char>(m));
    rep(i, n) rep(j, m)
    {
        cin >> arr[i][j];
    }

    rep(i, n)
    {
        rep(j, m)
        {
            int cnt = 0;
            if (arr[i][j] == '#')
                cnt++;
            if (i + 1 < n && arr[i + 1][j] == '#')
                cnt++;
            if (i - 1 >= 0 && arr[i - 1][j] == '#')
                cnt++;
            if (j + 1 < m && arr[i][j + 1] == '#')
                cnt++;
            if (j - 1 >= 0 && arr[i][j - 1] == '#')
                cnt++;
            if (i + 1 < n && j + 1 < m && arr[i + 1][j + 1] == '#')
                cnt++;
            if (i + 1 < n && j - 1 >= 0 && arr[i + 1][j - 1] == '#')
                cnt++;
            if (i - 1 >= 0 && j + 1 < m && arr[i - 1][j + 1] == '#')
                cnt++;
            if (i - 1 >= 0 && j - 1 >= 0 && arr[i - 1][j - 1] == '#')
                cnt++;

            cout << cnt;
        }
        cout << endl;
    }
}