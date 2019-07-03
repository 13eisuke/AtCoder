#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
ll MOD = 1000000007;

int main()
{
    ll n, k;
    cin >> n >> k;
    vector<long long> a(n);
    for (int i = 0; i < n; i++) cin >> a[i];

    long long res = 0;
    int right = 0;
    long long sum = 0;
    for (int left = 0; left < n; left++) {
        while (sum < k) {
            if (right == n) break;
            else {
                sum += a[right];
                right++;
            }
        }
        if (sum < k) break;
        res += n - right + 1;
        sum -= a[left]; 
    }

    cout << res << endl;
    return 0;
}
