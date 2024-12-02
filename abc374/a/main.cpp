#include <bits/stdc++.h>
using namespace std;
using vec = vector<vector<int>>;

#define rep(i, n) for(int i = 0; i < n; i++)
#define rep2(i, a, n) for(int i = a; i < n; i++)

int main()
{
    string s;
    cin >> s;

    int length = s.length();

    if(s[length-3] == 's' && s[length-2] == 'a' && s[length-1] == 'n'){
        cout << "Yes" << endl;
    }
    else cout << "No" << endl;
}