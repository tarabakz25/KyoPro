#include <bits/stdc++.h>
using namespace std;

#define rep(i, n) for(int i = 0; i < n; i++)

int main()
{
    int n;
    cin >> n;

    string s;
    cin >> s;

    string key = "";
    for(int i = 1; i < n / 2; i ++){
        if(i % s.length() == 0){
            key = "";
            rep(j, s.length()) key += s[j];
        }
        else continue;

        string t = s;

        while(1){
            string o;
            rep(k, i) o += t[k];

            if(o == key) t.erase(t.begin(), t.begin() + i);
            else break;

            if(t.length() == 0){
                cout << "Yes" << endl;
                return 0;
            }
        }
    }

    cout << "No" << endl;
}