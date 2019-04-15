#include <iostream>
#include <algorithm>
#include <math.h>
#include <string.h>
#include <vector>

typedef long long ll;
using namespace std;

int main()
{
    int N, M, C, cnt, ans = 0, a;
    cin >> N >> M >> C;

    vector <int> b(M, 0);

    for (int i = 0; i < M; i++) {
        cin >> b[i];
    }

    for (int i = 0; i < N; i++) {
        cnt = 0;
        for (int i = 0; i < M; i++) {
            cin >> a;
            cnt += a*b[i];
        }
        if (cnt + C > 0) ans++;
    }

    cout << ans << endl;

    
    return 0;
}
