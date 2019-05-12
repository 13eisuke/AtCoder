#include <iostream>
#include <algorithm>
#include <math.h>
#include <string.h>
#include <vector>

typedef long long ll;

using namespace std;

ll Mod = 1e9 + 7;
int main()
{
    ll N, ans = 0;
    vector <ll> tmp;

    cin >> N;
    for (ll i = 1; i <= ll(sqrt(N)); i++) {
        if (N % i == 0 && i < N/i-1) ans += (N / i - 1);
    }
    cout << ans << endl;
    return 0;
}