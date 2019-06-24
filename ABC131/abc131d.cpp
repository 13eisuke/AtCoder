#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
ll MOD = 1000000007;

int main()
{
    int N;
    ll now = 0;
    cin >> N;
    vector < pair<ll, ll> > X(N);

    for (int i = 0; i < N; i++) {
        cin >> X[i].second >> X[i].first;
    }
    sort(X.begin(), X.end());
 
    for (int i = 0; i < N; i++) {
        now += X[i].second;
        if (now > X[i].first) {
            cout << "No" << endl;
            return 0;
        }
    }
    cout << "Yes" << endl;
    return 0;
}
