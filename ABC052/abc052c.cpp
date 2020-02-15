#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
const ll MOD = 1e9 + 7;
const ll inf = 1LL<<60;
const double eps = 1e-9;

map< int, int > ret;

map< int, int > prime_factor(int n) {
    for(int i = 2; i * i <= n; i++) {
        while(n % i == 0) {
            ret[i]++;
            n /= i;
        }
  }
  if (n != 1) ret[n]++;
  return ret;
}
int main()
{
    int n;
    cin >> n;
    ll ans = 1;
    for (int i = 2; i <= n; i++) {
        prime_factor(i);
    }
    for (auto p : ret) {
        (ans *= (p.second + 1)) %= MOD;
    }
    cout << ans << endl;
    return 0;
}
