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
    string s1;
    ll n;
    cin >> n;
    cin >> s1;
    int m = -1;
    for (int i = 1; i < n; i++) {
        int x;
        //cout << s1.substr(0, i) << " " << s1.substr(i, n-i) << endl;
        x = lcs(s1.substr(0, i), s1.substr(i, n-i));

        m = max(x, m);
    }
    cout << m << endl;
    
    return 0;
}
