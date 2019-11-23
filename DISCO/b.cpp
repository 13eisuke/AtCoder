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
    int n;
    ll tmp1=0, tmp2=0;
    cin >> n;
    vector <ll> x(n, 0);
    for (int i = 0; i < n; i++) {
        cin >> x[i];
        tmp2 += x[i];
    }
    ll diff = inf;
    for (int i = 0; i < n; i++) {
        diff = min(diff, abs(tmp2-tmp1));
        tmp1 += x[i];
        tmp2 -= x[i];
    }
    cout << diff << endl;
    return 0;
}

