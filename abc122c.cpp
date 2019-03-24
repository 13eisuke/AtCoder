#include <iostream>
#include <algorithm>
#include <math.h>
#include <string.h>
#include <vector>

typedef long long ll;
using namespace std;

int main()
{
    int N, Q, l, r;
    string S;

    cin >> N >> Q;
    cin >> S;

    vector <int> X(N, 0);
    vector <int> ans(Q, 0);

    for (int i = 1; i < N; i++) {
        if (S[i-1] == 'A' && S[i] == 'C') X[i] = X[i-1] + 1;
        else X[i] = X[i-1];
    }

    for (int i = 0; i < Q; i++) {
        cin >> l >> r;
        ans[i] = X[r-1] - X[l-1];
    }
    for (int i = 0; i < Q; i++) {
        cout << ans[i] << endl;
    }
    return 0;
}
