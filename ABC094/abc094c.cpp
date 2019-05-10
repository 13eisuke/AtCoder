#include <iostream>
#include <algorithm>
#include <math.h>
#include <string.h>
#include <vector>

typedef long long ll;
using namespace std;

int main()
{
    int N, x, y, tmp;
    cin >> N;
    vector <int> A(N, 0), B(N, 0);
    for (int i = 0; i < N; i++) {
        cin >> tmp;
        A[i] = tmp;
        B[i] = tmp;
    }

    sort(A.begin(), A.end());
    x = A[N/2-1];
    y = A[N/2];

    for (int i = 0; i < N; i++) {
        if (B[i] <= x) cout << y << endl;
        else cout << x << endl;
    }
    return 0;
}
