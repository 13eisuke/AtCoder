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
    int n, ans = 1;
    string s;
    cin >> n >> s;
    char tmp = s[0];
    for (int i = 1; i < n; i++) {
        if (tmp != s[i]) {
            ans++;
            tmp = s[i];
        }
    }
    cout << ans << endl;
    return 0;
}

