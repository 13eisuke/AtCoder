#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<ll, ll> P;

const ll MOD = 1e9 + 7;
const ll inf = 1LL<<60;
const double eps = 1e-9;

const int dx[4] = { 1, 0, -1, 0 };
const int dy[4] = { 0, 1, 0, -1 };
 
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1; } return 0; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1; } return 0; }

int main()
{
    int q;
    cin >> q;
    
    vector <int> is_prime(101010, 1);
    is_prime[0] = is_prime[1] = 0;

    for (int i = 2; i < 101010; i++) {
        if (!is_prime[i]) continue;
        for (int j = i*2; j < 101010; j+=i) is_prime[j] = 0;
    }

    vector <int> tmp(101010, 0), sum(101011, 0);

    for (int i = 0; i < 101010; i++) {
        if (i%2 == 0) continue;
        if (is_prime[i] and is_prime[(i+1)/2]) tmp[i] = 1;
    }

    for (int i = 0; i < 101010; i++) sum[i+1] = sum[i] + tmp[i];
    
    vector<int> l(q), r(q);
    for (int i = 0; i < q; i++) {
        cin >> l[i] >> r[i];
    }
    for (int i = 0; i < q; i++) {
        cout << sum[r[i]+1] - sum[l[i]] << endl;
    }
    return 0;
}

