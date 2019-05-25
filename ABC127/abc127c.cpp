#include <bits/stdc++.h>

typedef long long ll;
using namespace std;

int main()
{
    int n, m, l, r;
    cin >> n >> m;
    cin >> l >> r;
    for (int i = 1; i < m; i++) {
        int tmp1, tmp2;
        cin >> tmp1 >> tmp2;
        l = max(l, tmp1);
        r = min(r, tmp2);
    }
    if (r - l + 1 > 0) cout << r - l + 1 << endl;
    else cout << 0 << endl;
    return 0;
}
