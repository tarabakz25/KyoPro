#include <bits/stdc++.h>
#include <chrono>

using namespace std;
using ll = long long;

#define REP(i, n) for (ll i = 0; i < n; i++)
#define REP2(i, a, n) for (ll i = a; i < n; i++)
#define REPR(i, n) for (ll i = n; i >= 0; i--)

int main()
{
    ll ax, ay, bx, by, cx, cy;
    cin >> ax >> ay >> bx >> by >> cx >> cy;

    ll a = (ax - bx) * (ax - bx) + (ay - by) * (ay - by);
    ll b = (ax - cx) * (ax - cx) + (ay - cy) * (ay - cy);
    ll c = (bx - cx) * (bx - cx) + (by - cy) * (by - cy);

    if(a + b == c || a + c == b || b + c == a) cout << "Yes" << endl;
    else cout << "No" << endl;
}