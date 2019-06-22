#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
ll MOD = 1000000007;

int main()
{
    int N, L, sum = 0, tmp = 1e9;
    cin >> N >> L;

    for (int i = L; i <= L + N - 1; i++) {
        sum += i;
        if (abs(tmp) > abs(i)) tmp = i;
    }
    cout << sum - tmp << endl;
    return 0;
}
