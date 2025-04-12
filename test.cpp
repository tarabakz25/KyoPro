#include <bits/stdc++.h>
#include <chrono>

using namespace std;
using ll = long long;

#define REP(i, n) for (ll i = 0; i < n; i++)
#define REP2(i, a, n) for (ll i = a; i < n; i++)
#define REPR(i, n) for (ll i = n; i >= 0; i--)

int main()
{
  ll n, k;
  cin >> n >> k;

  const ll MOD = 1000000000;
  vector<ll> a(n+1);

  if(n <= k){
    cout << 1 << endl;
    return 0;
  }

  // 初期値の設定
  for(ll i = 0; i < k; i++) {
    a[i] = 1;
  }

  // 漸化式の計算（累積和を使用）
  ll sum = k;
  for(ll i = k; i <= n; i++) {
    a[i] = sum % MOD;
    sum = (sum - a[i-k] + a[i]) % MOD;
    if(sum < 0) sum += MOD; // MODで割った余りが負になるのを防ぐ
  }

  cout << a[n] << endl;
  return 0;
}
