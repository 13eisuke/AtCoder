#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
const ll MOD = 1e9 + 7;
const ll inf = 1LL<<60;
const double eps = 1e-9;

typedef pair<ll, ll> P;
const int dx[4] = { 1, 0, -1, 0 };
const int dy[4] = { 0, 1, 0, -1 };
 
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1; } return 0; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1; } return 0; }

int main()
{
    int x;
    cin >> x;
    int a[2][4];
    string s = "+-";

    for (int i = 0; i < 4; i++) {
        a[0][3-i] = x%10;
        x /= 10;
    }

    for (int i = 0; i < 4; i++) {
        a[1][i] = -a[0][i];
    }

    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            for (int k = 0; k < 2; k++) {
                if (a[0][0] + a[i][1] + a[j][2] + a[k][3] == 7) {
                    cout << a[0][0];
                    cout << s[i] << abs(a[i][1]);
                    cout << s[j] << abs(a[j][2]);
                    cout << s[k] << abs(a[k][3]);
                    cout << "=7" << endl;
                    return 0;
                }
            }
        }
    }
    
    return 0;
}

