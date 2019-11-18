#include <bits/stdc++.h>
using namespace std;

#define all(x) (x).begin(),(x).end()
#define rep(i,l,r) for(int i=(int)(l);i<(int)(r);i++)

typedef long long ll;
const ll MOD = 1e9 + 7;
const ll inf = 1LL<<60;
const double eps = 1e-9;
const long double PI = (acos(-1));

int main()
{
    long double a, b, x;
    cin >> a >> b >> x;

    if (a * a * b /2.0 >= x) {
        cout << fixed << setprecision(10) << atan(a * b * b / (2 * x)) * 180.0 / PI << endl; 
    } else {
        cout << fixed << setprecision(10) << atan(2 * (a * a * b - x) / (a * a * a)) * 180.0 / PI << endl; 
    }
    return 0;
}

