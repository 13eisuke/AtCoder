#include <bits/stdc++.h>
using namespace std;
#define rep(i,l,r) for(int i=(int)(l);i<(int)(r);i++)

typedef long long ll;
ll MOD = 1000000007;

int main()
{
    double n, tmp, ans = 1, d = 0;
    cin >> n;
    vector <double> a(n, 0);
    for (int i = 0; i < n; i++) {
        cin >> tmp;
        ans *= tmp;
        a[i] = tmp;
    }
    for (int i = 0; i < n; i++) {
        d += ans / a[i];
    }
    cout << setprecision(10) << ans/d << endl;

    return 0;
}
