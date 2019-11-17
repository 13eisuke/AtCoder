#include <bits/stdc++.h>
using namespace std;

#define all(x) (x).begin(),(x).end()
#define rep(i,l,r) for(int i=(int)(l);i<(int)(r);i++)

typedef long long ll;
const ll MOD = 1e9 + 7;
const int MAX = 2010000;

long long fac[MAX], finv[MAX], inv[MAX];

// テーブルを作る前処理
void COMinit() {
    fac[0] = fac[1] = 1;
    finv[0] = finv[1] = 1;
    inv[1] = 1;
    for (int i = 2; i < MAX; i++){
        fac[i] = fac[i - 1] * i % MOD;
        inv[i] = MOD - inv[MOD%i] * (MOD / i) % MOD;
        finv[i] = finv[i - 1] * inv[i] % MOD;
    }
}

// 二項係数計算
long long COM(ll n, ll k){
    if (n < k) return 0;
    if (n < 0 || k < 0) return 0;
    return fac[n] * (finv[k] * finv[n - k] % MOD) % MOD;
}
int main()
{   
    ll x, y;
    cin >> x >> y;

    if ((x+y)%3 || (2*x < y) || (2*y < x)) {
        cout << 0 << endl;
        return 0;
    }

    ll tmp_x=0, tmp_y=0;

    tmp_x = (2*y - x) / 3;
    tmp_y = (2*x - y) / 3;
    
    COMinit();
    cout << COM(tmp_x + tmp_y, tmp_x) << endl;

    return 0;
}

