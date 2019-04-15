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
    bool isPossible = false;
    cin >> N >> M;
    vector <int> a(N, 0), b(N, 0);
    for (int i = 0; i < M; i++) {
        int x, y;
        cin >> x >> y;
        if (x == 1) a[y] = 1;
        if (y == N) b[x] = 1;
    }
    for (int i = 0; i < N; i++) {
        if (a[i] * b[i]) isPossible = true;
    }

    if (isPossible) cout << "POSSIBLE" << endl;
    else cout << "IMPOSSIBLE" << endl;
    return 0;
}