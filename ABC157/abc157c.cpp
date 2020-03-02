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
    int n, m;
    cin >> n >> m;
    vector <int> s(m), c(m);

    for (int i = 0; i < m; i++) {
        cin >> s[i] >> c[i];
        s[i]--;
    }

    int first, end;
    if (n == 1) {
        first = 0;
        end = 9;
    }
    if (n == 2) {
        first = 10;
        end = 99;
    }
    if (n == 3) {
        first = 100;
        end = 999;
    }
    
    int x[n], tmp;
    for (int i = first; i <= end; i++) {
        tmp = i;
        for (int j = n-1; j >= 0; j--) {
            x[j] = tmp % 10;
            tmp /= 10;
        }
        //for (int j = 0; j < n; j++) cout << x[j];
        //cout << endl;
        bool ok = true;
        for (int j = 0; j < m; j++) {
            //cout << x[s[j]] <<  " " << c[j] << endl;
            if (x[s[j]] != c[j]) ok = false;
        }
        if (ok) {
            cout << i << endl;
            return 0;
        }
    }
    cout << -1 << endl;
    return 0;
}

