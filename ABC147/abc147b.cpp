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
    string s;
    cin >> s;
    int ans = 0;

    for (int i = 0; i < int(s.size())/2; i++) {
        if (s[i] != s[int(s.size()) - i - 1]) ans++;
    }
    cout << ans << endl;
    return 0;
}

