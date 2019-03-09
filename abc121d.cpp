#include <iostream>
#include <algorithm>
#include <math.h>
#include <string.h>
#include <vector>

using namespace std;
typedef long long ll;

#define pll pair<ll,ll>

ll f(ll n) {
  if (n % 2)
    return ((n + 1) / 2) % 2;
  else {
    return ((n / 2) % 2) ^ n;
  }
}
 
int main() {
  ll a, b;
  cin >> a >> b;
  cout << (f(a - 1) ^ f(b)) << endl;
}