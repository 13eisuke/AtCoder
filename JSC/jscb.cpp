#include <bits/stdc++.h>
using namespace std;
#define rep(i,l,r) for(int i=(int)(l);i<(int)(r);i++)

typedef long long ll;
ll MOD = 1000000007;

int main()
{   
    ll n, k;
    cin >> n >> k;
    vector <int> a(2*n);
    ll c1 = 0, c2 = 0, tmp;

    for (int i = 0; i < n; i++) {
        cin >> tmp;
        a[i] = tmp;
    }

    for (int i = 0; i < n; i++) {
        for (int j = i+1; j < n; j++) {
            if (a[i] > a[j]) c1++;
        }
    }
    //cout << c1 << endl;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (a[i] > a[j]) c2++;
        }
    }
    //cout << c2 << endl;

    ll ans1 = (k*c1)%MOD;
    ll ans2 = (k*(k-1) / 2ll) % MOD;
    (ans2 *= c2) %= MOD;
    cout << (ans1 + ans2) % MOD << endl;

    
    return 0;
}
