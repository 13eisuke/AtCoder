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
    int n, ans = 0;
    cin >> n;
    vector <int> l(n);
    for (int i = 0; i < n; i++) cin >> l[i];

    sort(l.begin(), l.end());

    for (int i = 0; i < n; i++) {
        for (int j = i+1; j < n; j++) {
            ans += lower_bound(all(l), l[i]+l[j])-l.begin() - j - 1;
        }
    }
    cout << ans << endl;
    return 0;
}

