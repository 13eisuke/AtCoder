#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
ll MOD = 1000000007;

int main()
{
    double W, H, x, y;
    int c = 0;
    cin >> W >> H >> x >> y;
    if ((W / 2.0 == x) && (H / 2.0 == y)) c = 1;

    cout << setprecision(5) << (W * H / 2.0) << " " << c << endl;
    return 0;
}
