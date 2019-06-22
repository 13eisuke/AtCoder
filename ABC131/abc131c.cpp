#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
ll MOD = 1000000007;


ll mygcd(ll a, ll b) {
  return b != 0 ? mygcd(b, a % b) : a;
}
ll mylcm(ll a, ll b) {
  return a * b / mygcd(a, b);
}
int main()
{
    ll A, B, C, D;
    ll tmp, tmp1, tmp2, tmp3, tmp4, tmp5, tmp6;
    cin >> A >> B >> C >> D;

    tmp = mylcm(C, D);
    tmp1 = (A - 1) / C + 1;
    tmp2 = B / C;
    tmp3 = (A - 1) / D + 1;
    tmp4 = B / D;
    tmp5 = (A - 1) / tmp + 1;
    tmp6 = B / tmp;
    
    cout << (B - A + 1) - (tmp2 - tmp1 + 1) - (tmp4 - tmp3 + 1) + (tmp6 - tmp5 + 1)<< endl;
    return 0;
}
