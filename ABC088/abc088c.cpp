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
    int c[3][3];
    for (int i = 0; i < 3; i++) {
        cin >> c[i][0] >> c[i][1] >> c[i][2];
    }
    bool tmp = false;
    for (int i = 0; i <= 100; i++) {
        for (int j = 0; j <= 100; j++) {
            for (int k = 0; k <= 100; k++) {
                int tmp1 = 0, tmp2 = 0, tmp3 = 0;
                tmp1 = ((c[0][0] - i == c[0][1] - j) and(c[0][0] - i == c[0][2] - k));
                tmp2 = ((c[1][0] - i == c[1][1] - j) and(c[1][0] - i == c[1][2] - k));
                tmp3 = ((c[2][0] - i == c[2][1] - j) and(c[2][0] - i == c[2][2] - k));
                if (tmp1 and tmp2 and tmp3) {
                    cout << "Yes" << endl;
                    return 0;
                }
            }
        }
    }
    cout << "No" << endl;
	return 0;
}
