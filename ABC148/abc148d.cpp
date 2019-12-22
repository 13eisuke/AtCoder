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
    int n, cnt = 1;
    cin >> n;
    vector <int> a(n, 0);

    for (int i = 0; i < n; i++) {
        cin >> a[i];
        if (a[i] == cnt) cnt++;
    }
    if ( cnt == 1) cout << -1 << endl;
    else cout << n - cnt + 1<< endl;

    return 0;
}

