#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
const ll MOD = 1e9 + 7;
const ll inf = 1LL<<60;
const double eps = 1e-9;

int main()
{
    int N, tmp = 0, sum = 0;
    string K;
    cin >> N;
    vector <string> S(N);
    vector <int> T(N);
    for (int i = 0; i < N; i++) cin >> S[i] >> T[i];
    cin >> K;

    for (int i = 0; i < N; i++) {
        if (tmp) sum += T[i];
        if (S[i] == K) tmp = 1;
    }
    cout << sum << endl;
    return 0;
}

