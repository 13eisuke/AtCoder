#include <iostream>
#include <algorithm>
#include <math.h>
#include <string.h>
#include <vector>

typedef long long ll;
using namespace std;

int main()
{
    int D, G, p[10], c[10];
    cin >> D >> G;
    for (int i = 0; i < D; i++) {
        cin >> p[i] >> c[i];
    }

    int ans = 1e9;

    for (int bit = 0; bit < (1 << D) ; bit++) {
        int sum = 0, num = 0;
        for (int i = 0; i < D; i++) {
            if (bit & (1 << i)) {
                sum += 100 * (i+1) * p[i] + c[i];
                num += p[i];
            }
        }

        for (int i = D - 1; i >= 0; i--) {
            if (bit & (1 << i)) continue;
            for (int j = 0; j < p[i] - 1; j++) {
                if (sum >= G) break;
                sum += 100 * (i + 1);;
                num++;
            }
        }
        ans = min(ans, num);
    }

    cout << ans << endl;

    return 0;
}