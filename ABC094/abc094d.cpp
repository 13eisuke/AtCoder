#include <iostream>
#include <algorithm>
#include <math.h>
#include <string.h>
#include <vector>

typedef long long ll;
using namespace std;

int main()
{
    int N, M, ans = 1e9, k;
    cin >> N;
    vector <int> A(N, 0);
    for (int i = 0; i < N; i++) cin >> A[i];

    sort(A.begin(), A.end());
    M = A[N-1];
    
    for (int i = 0; i < N; i++) {
        if (ans > abs(A[i]*2 - M)) {
            ans = abs(A[i]*2 - M);
            k = A[i];
        }
    }

    cout << A[N-1] << " " << k << endl;
    return 0;
}
