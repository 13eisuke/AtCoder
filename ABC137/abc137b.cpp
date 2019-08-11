#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
ll MOD = 1000000007;

int main()
{
    int k, x;
    cin >> k >> x;

    for (int i = x-k+1; i <= k+x-1; i++) {
        cout << i << " ";
    }
    cout << endl;
    return 0;
}
