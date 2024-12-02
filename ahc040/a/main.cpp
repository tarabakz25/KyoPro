#include <bits/stdc++.h>
using namespace std;
using ll = long long int;

#define REP(i, n) for (ll i = 0; i < n; i++)
#define REP2(i, a, n) for (ll i = a; i < n; i++)
#define REPR(i, n) for (ll i = n; i >= 0; i--)

void query(vector<vector<ll>> &q)
{
    cout << q.size() << endl;
    REP(i, q.size())
    {
        if (q[i][2] == 0)
            cout << q[i][0] << " " << q[i][1] << " " << "U" << " " << q[i][3] << endl;
        else
            cout << q[i][0] << " " << q[i][1] << " " << "L" << " " << q[i][3] << endl;
    }
    ll w, h;
    cin >> w >> h;

    q.clear();
}

bool is_square(ll w, ll h)
{
    if (abs(w - h) <= 50)
        return true;
    else
        return false;
}

int main()
{
    ll N, T, a;
    cin >> N >> T >> a;

    map<ll, pair<ll, ll>> arr;
    vector<vector<ll>> heights;
    map<ll, ll> square;

    ll square_height = 0;

    REP(i, N)
    {
        ll w, h;
        cin >> w >> h;
        w /= 100;
        h /= 100;

        arr[i] = {w, h};

        if (is_square(w, h))
        {
            square[i] = 1;
            square_height += h;
        }
        else
            square[i] = 0;
    }

    vector<vector<ll>> q;

    REP(i, T)
    {
        ll pivot = -1;

        REP(j, N)
        {
            if(i % 5 == 0 && i != 0){
                q.push_back({j, 0, 0, -1});
            }
            else{
                if(arr[j].first < arr[j].second){
                    q.push_back({j, 0, 0, pivot});
                }
                else{
                    q.push_back({j, 1, 0, pivot});
                }
            }

            pivot = j;
        }

        query(q);
    }
}