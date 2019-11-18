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
    int n, m;
    cin >> n >> m;
    vector <int> x(m, 0);
    int a, b;
    ll ans = 0;
    for (int i = 0; i < n; i++) {
        cin >> a >> b;
        if (i >= a+b) {
            if (x[i-a-b] == 0) {
                ans++;
                x[i-a-b] = 1;
            }
        }
    }
    cout << ans << endl;
    return 0;
}
