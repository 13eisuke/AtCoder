#include <iostream>
#include <algorithm>
#include <math.h>
#include <string.h>
#include <vector>

typedef long long ll;
using namespace std;

int main()
{
    int N, T, A, tmp, m = 1e9, idx;
    cin >> N >> T >> A;
    for (int i = 0; i < N; i++) {
        cin >> tmp;
        if (m > abs(1000*A - (1000*T - tmp*6))) {
            m = abs(1000*A - (1000*T - tmp*6));
            idx = i;
        }
    }
    cout << idx + 1 << endl;
    return 0;
}
