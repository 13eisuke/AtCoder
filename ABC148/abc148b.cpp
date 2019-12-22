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
    string s, t, ans;
    int n;
    cin >> n >> s >> t;

    for (int i = 0; i < n; i++) {
        cout << s[i] << t[i];
    }
    cout << endl;
    return 0;
}

