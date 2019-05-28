#include <bits/stdc++.h>
#include <bitset>
using namespace std;

typedef long long ll;

int main()
{
    int N, K;
    cin >> N >> K;
    vector<int> V(N);
    for (int i = 0; i < N; i++) cin >> V[i];
 
    ll ans = (int)-1e9;
 
    for (int l = 0; l < K + 1; l++) {
        for (int r = 0; r < K + 1; r++) {
            if (l + r > min(K, N))
                break;
            vector<int> a;
            for (int i = 0; i < l; i++) { a.push_back(V[i]); }
            for (int i = 0; i < r; i++) { a.push_back(V[N - i - 1]); }
            sort(a.begin(), a.end());
            ll sum = 0;
            for (int i = 0; i < int(a.size()); i++) {
                if (a[i] < 0 && i < K - r - l) {
                } else {
                    sum += a[i];
                }
            }
            ans = max(ans, sum);
        }
    }
 
    cout << ans << endl;;
 
    return 0;
}


