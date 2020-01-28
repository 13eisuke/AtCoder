#include <bits/stdc++.h>
using namespace std;

#define all(x) (x).begin(),(x).end()
#define rep(i,l,r) for(int i=(int)(l);i<(int)(r);i++)

typedef long long ll;
const ll MOD = 1e9 + 7;
const ll inf = 1LL<<60;
const double eps = 1e-9;


int main()
{
    vector <int> x(3);
    cin >> x[0] >> x[1] >> x[2];
    sort(x.begin(), x.end());

    int ans = 0;
    ans += x[2] - x[1];
    x[0] += x[2] - x[1];
    if ((x[2] - x[0]) % 2) ans += (x[2] - x[0] + 1) / 2 + 1;
    else ans += (x[2] - x[0]) / 2;
    
    cout << ans << endl;
    return 0;
}

