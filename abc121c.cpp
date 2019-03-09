#include <iostream>
#include <algorithm>
#include <math.h>
#include <string.h>
#include <vector>

using namespace std;
typedef long long ll;

#define pll pair<ll,ll>

int main()
{
    int N, M, tmp;
    ll ans = 0;
    cin >> N >> M;

    vector <pll> ab(N);

    for (int i = 0; i < N; i++) {
        cin >> ab[i].first >> ab[i].second;
    }

    sort(ab.begin(), ab.end());

    int i = 0;

    while (M > 0) {
        if (M >= ab[i].second) {
            M -= ab[i].second;
            ans += ab[i].first * ab[i].second;
        }
        else {
            ans += ab[i].first * M;
            M = 0;
        }
        i++;
    }
    cout << ans << endl;
    
    return 0;
}
