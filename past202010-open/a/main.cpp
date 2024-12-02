#include <bits/stdc++.h>
using namespace std;
using vec = vector<vector<int>>;

#define rep(i, n) for(int i = 0; i < n; i++)
#define rep2(i, a, n) for(int i = a; i < n; i++)

int main()
{
    int a, b, c;
    cin >> a >> b >> c;

    if(a >= b && b >= c) cout << "B" << endl;
    else if(b >= a && a >= c) cout << "A" << endl;
    else if(c >= b && b >= a) cout << "B" << endl;
    else if(c >= a && a >= b) cout << "A" << endl;
    else if(a >= c && c >= b) cout << "C" << endl;
    else if(b >= c && c >= a) cout << "C" << endl;
}