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
    int a[3][3], n;
    bool x[3][3] = {false};

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cin >> a[i][j];
        }
    }
    cin >> n;
    int b;
    for (int i = 0; i < n; i++) {
        cin >> b;
        for (int j = 0; j < 3; j++) {
            for (int k = 0; k < 3; k++) {
                if (a[j][k] == b) x[j][k] = true;
            }
        }
    }
    bool ok = false;
    for (int i = 0; i < 3; i++) {
        if (x[i][0] and x[i][1] and x[i][2]) ok = true;
    }

    for (int i = 0; i < 3; i++) {
        if (x[0][i] and x[1][i] and x[2][i]) ok = true;
    }

    if (x[0][0] and x[1][1] and x[2][2]) ok = true;
    if (x[2][0] and x[1][1] and x[0][2]) ok = true;

    
    if (ok) cout << "Yes" << endl;
    else cout << "No" << endl;


    return 0;
}

