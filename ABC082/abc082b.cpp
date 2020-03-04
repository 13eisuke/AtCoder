#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<ll, ll> P;

const ll MOD = 1e9 + 7;
const ll inf = 1LL<<60;
const double eps = 1e-9;

const int dx[4] = { 1, 0, -1, 0 };
const int dy[4] = { 0, 1, 0, -1 };
 
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1; } return 0; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1; } return 0; }

int main()
{
    string s, t;
    cin >> s >> t;
    vector <char> a, b;

    for (int i = 0; i < s.size(); i++) {
        a.push_back(s[i]);
    }
    for (int i = 0; i < t.size(); i++) {
        b.push_back(t[i]);
    }
    
    sort(a.begin(), a.end());
    sort(b.begin(), b.end(), greater<int>());

    s = "";
    t = "";

    for (int i = 0; i < a.size(); i++) {
        s += a[i];
    }
    for (int i = 0; i < b.size(); i++) {
        t += b[i];
    }
    //cout << s << " " << t << endl;

    if (s < t) cout << "Yes" << endl;
    else cout << "No" << endl;
    return 0;
}

