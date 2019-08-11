#include <bits/stdc++.h>
using namespace std;
#define rep(i,l,r) for(int i=(int)(l);i<(int)(r);i++)

typedef long long ll;
ll MOD = 1000000007;

int main()
{
    int N, cnt = 0;
    cin >> N;
    vector <int> a(N, 0);
    rep(i, 0, N) {
        cin >> a[i];
        if (i+1 != a[i]) cnt++;
    }
    if (cnt > 2) cout << "NO" << endl;
    else cout << "YES" << endl;

    return 0;
}
