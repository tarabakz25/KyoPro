#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;

    int cnt = 0;
    
    for(int i = 0; i < s.length(); i++){
        bool flag = 0;
        if(s[i] == 'x') flag = 1;
        else if(s[i] == 'o' && flag){
            cnt ++;
            flag = 0;
        }
        else if(s[i] == 'x' && flag){
            cnt ++;
            flag = 0;
            i ++;
        }
    }
    cout << cnt << endl;
}