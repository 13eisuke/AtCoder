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
    int N, tmp_A = 0, tmp_B = 0;
    cin >> N;
    vector <int> P(N), Q(N), X(N+1), tmp(N+1, 0), tmp2(N+1, 0);
    for (int i = 0; i < N; i++) cin >> P[i];
    for (int i = 0; i < N; i++) cin >> Q[i];

    X[1] = 1;
    for (int i = 2; i <= N; i++) {
        X[i] = i * X[i-1];
    }

    for (int i = 0; i < N; i++) {
        int k = 0;
        for (int j = 1; j < P[i]; j++) {
            k += tmp[j];
        }
        tmp[P[i]]++;
        tmp_A += (P[i] - k - 1) * X[N-i-1];
    }

    for (int i = 0; i < N; i++) {
        int k = 0;
        for (int j = 1; j < Q[i]; j++) {
            k += tmp2[j];
        }
        tmp2[Q[i]]++;
        tmp_B += (Q[i] - k - 1) * X[N-i-1];
    }
    cout << abs(tmp_A - tmp_B) << endl;

    return 0;
}
