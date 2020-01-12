#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
const ll MOD = 1e9 + 7;
const ll inf = 1LL<<60;
const double eps = 1e-9;

int main()
{
    int N, M, K, sum = 0;
    cin >> N >> M >> K;
    vector <int> A(N-1, 0);
    for (int i = 0; i < N-1; i++) {
        cin >> A[i];
        sum += A[i];
    }
    if (N*K - sum <= M) cout << max(0, N*K - sum) << endl;
    else cout << -1 << endl;

    return 0;
}

