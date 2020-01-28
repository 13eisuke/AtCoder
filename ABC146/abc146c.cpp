#include <bits/stdc++.h>
using namespace std;

#define all(x) (x).begin(),(x).end()
#define rep(i,l,r) for(int i=(int)(l);i<(int)(r);i++)

typedef long long ll;
#define int ll
const ll MOD = 1e9 + 7;
const ll inf = 1LL<<60;
const double eps = 1e-9;

ll a, b, x;

// index が条件を満たすかどうか
bool isOK(int val) {
    ll cnt = 0, tmp = val;
    while (tmp) {
        cnt++;
        tmp /= 10;
    }
    //cout << a*val + b*cnt << " " << x << endl;
    if (a*val + b*cnt <= x) return true;
    else return false;
}

// 汎用的な二分探索のテンプレ
int binary_search() {
    int ng = 1e9+1; //「index = 0」が条件を満たすこともあるので、初期値は -1
    int ok = 0; // 「index = a.size()-1」が条件を満たさないこともあるので、初期値は a.size()

    /* ok と ng のどちらが大きいかわからないことを考慮 */
    while (abs(ok - ng) > 1) {
        int mid = (ok + ng) / 2;
        //cout << mid << endl;
        if (isOK(mid)) ok = mid;
        else ng = mid;
    }
    return ok;
}
signed main()
{
    cin >> a >> b >> x;
    cout << binary_search() << endl;
    return 0;
}

