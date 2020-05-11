#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<ll, ll> P;

const ll MOD = 1e9 + 7;
const ll inf = 1LL<<60;
const int int_inf = 100000000;
const double eps = 1e-9;

const int dx[4] = { 1, 0, -1, 0 };
const int dy[4] = { 0, 1, 0, -1 };
 
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1; } return 0; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1; } return 0; }

int main()
{
    cin.tie(0);
    ios::sync_with_stdio(false);
    
    ll n, k;
    cin >> n >> k;
    vector<int> a(n, 0);

    for (int i = 0; i < n; i++) cin >> a[i], a[i]--;

    vector<int> s, ord(n, -1);
    int c = 1, l = 0, v = 0;
    while (ord[v] == -1) {
        ord[v] = s.size();
        s.push_back(v);
        v = a[v];
    }
    c = s.size() - ord[v];
    l = ord[v];

    if (k < l) cout << s[k]+1 << endl;
    else {
        k -= l;
        k %= c;
        cout << s[l+k]+1 << endl;
    }

    return 0;
}

