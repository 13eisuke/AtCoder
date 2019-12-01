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
    string s;
    cin >> n >> s;

    for (int i = 0; i < 1000; i++) {
        int tmp[3] = {i/100, i/10%10, i%10};
        int cnt = 0;
        for (int j = 0; j < n; j++) {
            if (s[j] - '0' == tmp[cnt]) cnt++;
            if (cnt == 3) {
                ans++;
                break;
            }
        }
    }
    cout << ans << endl;
    return 0;
}

