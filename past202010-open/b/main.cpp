#include <bits/stdc++.h>
using namespace std;
using vec = vector<vector<int>>;

#define rep(i, n) for (int i = 0; i < n; i++)
#define rep2(i, a, n) for (int i = a; i < n; i++)

int main()
{
    int n, m;
    cin >> n >> m;

    vector<vector<char[m]>> arr(n);
    rep(i, n) rep(j, m)
    {
        cin >> arr[i][j];
    }

    rep(i, n)
    {
        rep(j, m)
        {
            int cnt = 0;
            if (arr[i + 1][j] == '#')
                cnt++;
            else if (arr[i - 1][j] == '#')
                cnt++;
            else if (arr[i][j + 1] == '#')
                cnt++;
            else if (arr[i][j - 1] == '#')
                cnt++;
            else if (arr[i + 1][j + 1] == '#')
                cnt++;
            else if (arr[i + 1][j - 1] == '#')
                cnt++;
            else if (arr[i - 1][j + 1] == '#')
                cnt++;
            else if (arr[i - 1][j - 1] == '#')
                cnt++;

            cout << cnt;
        }
        cout << endl;
    }
}