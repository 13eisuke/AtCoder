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

const double PI = acos(-1);

int main()
{
    cin.tie(0);
    ios::sync_with_stdio(false);
    
    double a, b, h, m;
    cin >> a >> b >> h >> m;

    double x;
    if (abs(60.0*h - 11.0*m) < 360) x = abs(60.0*h - 11.0*m);
    else x = 720.0 - abs(60.0*h - 11.0*m);

    //cout << x << endl;

    if (x == 0) {
        cout << abs(a-b) << endl;
        return 0;
    }
    x = x * 2.0 * PI / 720.0; 
    cout << setprecision(12) << sqrt(a*a + b*b - 2.0*a*b*cos(x)) << endl;

    return 0;
}

