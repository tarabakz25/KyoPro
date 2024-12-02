#include <bits/stdc++.h>
using namespace std;

int main()
{
    char a, b, c, d;
    cin >> a >> b >> c >> d;

    auto is_low = [](char a, char b){
        return abs(a - b) == 1 || abs(a - b) == 4;
    };

    if(is_low(a, b) == is_low(c, d)) cout << "Yes" << endl;
    else cout << "No" << endl;

    return 0; 
}