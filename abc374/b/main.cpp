#include <bits/stdc++.h>
using namespace std;
using vec = vector<vector<int>>;

#define rep(i, n) for(int i = 0; i < n; i++)
#define rep2(i, a, n) for(int i = a; i < n; i++)

int main()
{
    string s, t;
    cin >> s >> t;

    int slength = s.length();
    int tlength = t.length();

    rep(i, max(s.length(), t.length())){
        if(slength > i && tlength > i && s[i] != t[i]){
            cout << i+1 << endl;
            return 0;
        }
        else if(slength <= i){
            cout << i+1 << endl;
            return 0;
        }
        else if(tlength <= i){
            cout << i+1 << endl;
            return 0;
        }
    }
    cout << 0 << endl;
}