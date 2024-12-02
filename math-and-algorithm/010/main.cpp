#include <bits/stdc++.h>
using namespace std;
using vec = vector<vector<int>>;
using ll = long long;

#define rep(i, n) for(ll i = 0; i < n; i++)
#define rep2(i, a, n) for(ll i = a; i < n; i++)

int factorial(int n)
{
    if(n <= 1) return 1;
    return n * factorial(n-1);
}

int main()
{
    int n;
    cin >> n;

    cout << factorial(n) << endl;
}