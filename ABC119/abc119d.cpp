#include <bits/stdc++.h>
using namespace std;

#define ALL(a)  (a).begin(),(a).end()

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
    int a, b, q;
    cin >> a >> b >> q;
    vector <ll> s(a), t(b);
    for (int i = 0; i < a; i++) cin >> s[i];
    for (int i = 0; i < b; i++) cin >> t[i];

    for (int i = 0; i < q; i++) {
        ll x;
        cin >> x;
        
        int left_s, right_s, left_t, right_t;
        right_s = lower_bound(ALL(s), x) - s.begin();
        left_s = right_s - 1;
        right_t = lower_bound(ALL(t), x) - t.begin();
        left_t = right_t - 1; 

        //cout << left_s << " " << right_s << " " << left_t << " " << right_t << endl;
        ll ans = inf;
        // right right
        if (right_s < a and right_t < b) chmin(ans, max(s[right_s], t[right_t]) - x);
        // left left
        if (left_s >= 0 and left_t >= 0) chmin(ans, x - min(s[left_s], t[left_t]));
        // right left
        if (right_s < a and left_t >= 0) {
            ans = min({ans, (s[right_s] - x) * 2 + x - t[left_t], (x - t[left_t]) * 2 + s[right_s] - x});
        }
        // left right
        if (left_s >= 0 and right_t < b) {
            ans = min({ans, (x - s[left_s]) * 2 + t[right_t] - x, (t[right_t] - x) * 2 + x - s[left_s]});
        }
        cout << ans << endl;
    }
    return 0;
}

