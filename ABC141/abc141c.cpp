#include <bits/stdc++.h>
using namespace std;

#define all(x) (x).begin(),(x).end()
#define rep(i,l,r) for(int i=(int)(l);i<(int)(r);i++)

typedef long long ll;
const ll MOD = 1e9 + 7;
const ll inf = 1LL<<60;
const double eps = 1e-9;


int main()
{
    ll n, k, q;
    cin >> n >> k >> q;
    vector <int> a(n, 0);
    for (int i = 0; i < q; i++) {
        ll tmp;
        cin >> tmp;
        a[tmp-1]++;
    }
    for (int i = 0; i < n; i++) {
        if (k - (q - a[i]) > 0) cout << "Yes" << endl;
        else cout << "No" << endl;
    }


    return 0;
}
