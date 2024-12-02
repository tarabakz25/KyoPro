#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int Max = 0;

    int ans = 0;
    for(int i = 1; i <= n; i ++){
        if(Max >= ans){
            continue;
            i --;
        }

        ans ++;
        if(ans == 3){
            ans %= 3;
            ans += (10 * i) + 1;
        }
        Max = ans;
    }
    
    cout << ans << endl;
}