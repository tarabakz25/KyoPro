#include <bits/stdc++.h>
using namespace std;
using vec = vector<vector<int>>;

#define rep(i, n) for(int i = 0; i < n; i++)
#define rep2(i, a, n) for(int i = a; i < n; i++)

int main()
{
    int k, g, m;
    cin >> k >> g >> m;

    int gcnt = 0;
    int mcnt = 0;

    for(int i = 0; i < k; i ++){
        if(gcnt == g) gcnt = 0;
        else if(mcnt == 0) mcnt = m;
        else{
            if(g >= mcnt){
                gcnt += mcnt;
                mcnt = 0;
            }
            else{
                gcnt = g;
                mcnt -= g;
            }
        }
    }

    cout << gcnt << " " << mcnt << endl; 
}