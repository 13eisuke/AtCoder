#include <iostream>
#include <algorithm>
#include <math.h>
#include <string.h>
#include <vector>

typedef long long ll;
using namespace std;

int dp[1020][1020];

int main()
{  
    int N, M;
    cin >> N >> M;
    vector <int> b(N, 0), x(N, 0);

    for (int i = 0; i < N; i++) {
        cin >> b[i] >> x[i];
    }

    for (int i = 0; i < N; i++) {
        for (int j = 0; j <= M; j++) {
            if (j < x[i]) {
                dp[i + 1][j] = dp[i][j];
            } else {
                dp[i + 1][j] = max(dp[i][j], dp[i][j - x[i]] + b[i]);
            }
        }
    }

    cout << dp[N][M] << endl;
    return 0;
}