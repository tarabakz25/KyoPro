#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    if(n >= 300) cout << 400 - n << endl;
    else if(n >= 200) cout << 300 - n << endl;
    else if(n >= 100) cout << 200 - n << endl;
    else cout << 100 - n << endl;
}