#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
ll MOD = 1000000007;

int main()
{
    int n, cnt = 0;
    cin >> n;
    vector <int> a(n, 0);
    for (int i = 0; i < n; i++) cin >> a[i];
    for (int i = 1; i < n-1; i++) {
        if ((a[i-1] < a[i] && a[i] < a[i+1]) || (a[i-1] > a[i] && a[i] > a[i+1])) cnt++;
    }

    cout << cnt << endl;
    return 0;
}
