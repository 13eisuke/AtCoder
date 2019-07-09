#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
ll MOD = 1000000007;

int main()
{
    int N, S = 0;
    cin >> N;
    vector <int> A(N, 0), X(N, 0);
    for (int i = 0; i < N; i++) cin >> A[i];

    for (int i = 0; i < N; i++) {
        if (i%2) X[0] -= A[i];
        else X[0] += A[i];
    }

    for (int i = 1; i < N; i++) {
        X[i] = 2*A[i-1] - X[i-1];
    }

    for (int i = 0; i < N; i++) {
        cout << X[i] << " ";
    }
    cout << endl;
    return 0;
}
