#include <iostream>
#include <algorithm>
#include <math.h>
#include <string.h>
#include <vector>

typedef long long ll;
using namespace std;

int main()
{
    ll N, K, ans = 1000000000;
    cin >> N >> K;

    vector <ll> h(N, 0);

    for (int i = 0; i < N; i++) {
        cin >> h[i];
    }

    sort(h.begin(), h.end());

    for (int i = 0; i < N - K + 1; i++) {
        ans = min(h[i + K - 1] - h[i], ans);
    }

    cout << ans << endl;

    return 0;
}
