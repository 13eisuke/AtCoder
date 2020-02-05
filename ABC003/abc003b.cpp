#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
const ll MOD = 1e9 + 7;
const ll inf = 1LL<<60;
const double eps = 1e-9;

typedef pair<ll, ll> P;

template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1; } return 0; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1; } return 0; }

int main()
{
    string s, t, tmp = "atcoder";
    cin >> s >> t;
    bool ok = true;

    for (int i = 0; i < s.size(); i++) {
        if (s[i] == t[i]) continue;
        else if (s[i] == '@') {
            int j;
            bool x = false;
            for (j = 0; j < tmp.size(); j++) {
                if (t[i] == tmp[j]) {
                    x = true;
                    continue;
                }
            }
            if (j == int(tmp.size()) and !x) {
                cout << "You will lose" << endl;
                return 0;
            }
        }
        else if (t[i] == '@') {
            int j;
            bool x = false;
            for (j = 0; j < tmp.size(); j++) {
                if (s[i] == tmp[j]) {
                    x = true;
                    continue;
                }
            }
            if (j == int(tmp.size()) and !x) {
                cout << "You will lose" << endl;
                return 0;
            }
        }
        else {
            cout << "You will lose" << endl;
            return 0;           
        }
    }
    cout << "You can win" << endl;
	return 0;
}
