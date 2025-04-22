#include <bits/stdc++.h>
using namespace std;

int main()
{
  int n, m;
  cin >> n >> m;
  
  vector<int> a(n, 0);
  for(int i = 0; i < m; i ++){
    int t;
    cin >> t;
    a[t-1] = 1; 
  }

  cout << n - m << endl;
  
  for(int i = 1; i <= n; i ++) {
    if(a[i-1] != 1) cout << i << endl;
  }
}