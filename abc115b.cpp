#include <iostream>
#include <algorithm>
#include <math.h>
#include <string.h>
#include <vector>

typedef long long ll;
using namespace std;

int main()
{
    ll N, MAX = -1, ans = 0, tmp;
    cin >> N;

    for (int i = 0; i < N; i++) {
        cin >> tmp;
        ans += tmp;
        MAX = max(MAX, tmp);
    }

    cout << ans - MAX / 2 << endl;

    return 0;
}
