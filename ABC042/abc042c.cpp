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
    int n, k;
    cin >> n >> k;
    vector <int> a(k);
    for (int i = 0; i < k; i++) {
        cin >> a[i];
    }

    for (int i = n; i >= 0; i++) {
        int tmp = i;
        bool ok = true;
        while (tmp) {
            int x = tmp % 10;
            for (int j = 0; j < k; j++) {
                if (a[j] == x) ok = false;
            }
            tmp /= 10;
        }
        if (ok) {
            cout << i << endl;
            break;
        }
    }
    return 0;
}

