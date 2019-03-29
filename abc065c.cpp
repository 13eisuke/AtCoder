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
    int N, M;
    ll ans=1;

    cin >> N >> M;

    if (abs(N - M) >= 2) cout << 0 << endl;
    else if (N + 1 == M) {
        for (int i = 1; i <= N; i++) {
            ans *= i;
            ans %= Mod;
        }
        for (int i = 1; i <= M; i++) {
            ans *= i;
            ans %= Mod;
        }
        cout << ans << endl;
    }
    else if (M + 1 == N){
        for (int i = 1; i <= N; i++) {
            ans *= i;
            ans %= Mod;
        }
        for (int i = 1; i <= M; i++) {
            ans *= i;
            ans %= Mod;
        }
        cout << ans << endl;
    }
    else {
        for (int i = 1; i <= N; i++) {
            ans *= i;
            ans %= Mod;
        }
        for (int i = 1; i <= M; i++) {
            ans *= i;
            ans %= Mod;
        }
        cout << 2*ans%Mod << endl;
    }

    return 0;
}
