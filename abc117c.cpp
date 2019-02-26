#include <iostream>
#include <algorithm>
#include <math.h>
#include <string.h>
#include <vector>

typedef long long ll;
using namespace std;


int main()
{
    int N, M, sum = 0;
    cin >> N >> M;

    vector <int> X(M, 0);

    for (int i = 0; i < M; i++) {
        cin >> X[i];
    }

    sort(X.begin(), X.end());

    vector <int> L(M-1, 0);

    for (int i = 0; i < M-1; i++) {
        L[i] = X[i+1] - X[i];
    }

    sort(L.begin(), L.end());

    for (int i = 0; i < M-N; i++) {
        sum += L[i];
    }

    cout << sum << endl;
    return 0;
}