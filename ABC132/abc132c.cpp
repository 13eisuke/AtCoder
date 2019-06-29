#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
ll MOD = 1000000007;

int main()
{
    int n;
    cin >> n;
    vector <int> a(n, 0);
    for (int i = 0; i < n; i++) cin >> a[i];
    sort(a.begin(), a.end());

    cout << a[n/2] - a[n/2-1]<< endl;
    return 0;
}
