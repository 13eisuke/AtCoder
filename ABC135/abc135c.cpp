#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
ll MOD = 1000000007;

int main()
{
    int N;
    ll cnt = 0;
    cin >> N;
    vector <int> a(N+1, 0), b(N, 0);
    for (int i = 0; i < N+1; i++) cin >> a[i];
    for (int i = 0; i < N; i++) cin >> b[i];

    for (int i = N-1; i >= 0; i--) {
        if (b[i] <= a[i+1]) {
            cnt += b[i];
            a[i+1] -= b[i];
        } else if (b[i] <= a[i+1] + a[i]){
            cnt += b[i];
            a[i] -= b[i] - a[i+1];
            a[i+1] = 0;
        } else {
            cnt += a[i+1] + a[i];
            a[i+1] = 0;
            a[i] = 0;
        }
    }
    cout << cnt << endl;
    
    return 0;
}
