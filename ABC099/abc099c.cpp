#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
const ll MOD = 1e9 + 7;
const ll inf = 1LL<<60;
const double eps = 1e-9;

typedef pair<ll, ll> P;

int main()
{
    int N, ans = 100000+1;
    cin >> N;

    for (int i = 0; i <= N; i++) {
        int tmp = i, sum = 0;
        while (tmp) {
            sum += tmp % 6;
            tmp /= 6;
        }
        tmp = N - i;
        while (tmp) {
            sum += tmp % 9;
            tmp /= 9;
        }
        ans = min(ans, sum);
    }
    cout << ans << endl;

    return 0;
}

