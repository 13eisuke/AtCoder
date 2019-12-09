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
    int n, a, ans = 0;
    cin >> n;
    vector <int> x[15], y[15];
    for (int i = 0; i < n; i++) {
        cin >> a;
        for (int j = 0; j < a; j++) {
            int tmpx, tmpy;
            cin >> tmpx >> tmpy;
            tmpx--;
            x[i].emplace_back(tmpx);
            y[i].emplace_back(tmpy);
        }
    }

    for (int bit = 0; bit < (1<<n); bit++) {
        bool isOK = true;
        int cnt = 0;
        for (int i = 0; i < n; i++) {
            if (bit & (1<<i)) {
                cnt++;
                for (int j = 0; j < int(x[i].size()); j++) {
                    if (y[i][j]) {
                        if ((bit & (1<<x[i][j])) == 0) isOK = false;
                    } else {
                        if ((bit & (1<<x[i][j]))) isOK = false;
                    }
                }
            }
        }
        if (isOK) ans = max(ans, cnt);
    }
    
    cout << ans << endl;
    
    return 0;
}

