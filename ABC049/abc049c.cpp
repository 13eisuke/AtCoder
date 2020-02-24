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
    string s;
    cin >> s;

    vector <string> t;
    t.push_back("dream");
    t.push_back("dreamer");
    t.push_back("erase");
    t.push_back("eraser");
    int now = int(s.size());

    while (now > 0) {
        //cout << now << endl;
        bool ok = false;
        for (int i = 0; i < 4; i++) {
            //cout << now - int(t[i].size()) << endl;
            if (now - int(t[i].size()) >= 0) {
                if (s.substr(now - int(t[i].size()), int(t[i].size())) == t[i]) {
                    ok = true;
                    now -= int(t[i].size());
                    break;
                }
            }
        }
        if (!ok) {
            cout << "NO" << endl;
            return 0;
        }
    }
    cout << "YES" << endl;
    return 0;
}

