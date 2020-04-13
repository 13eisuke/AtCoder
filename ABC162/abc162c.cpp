#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<ll, ll> P;

const ll MOD = 1e9 + 7;
const ll inf = 1LL<<60;
const int int_inf = 100000000;
const double eps = 1e-9;

const int dx[4] = { 1, 0, -1, 0 };
const int dy[4] = { 0, 1, 0, -1 };
 
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1; } return 0; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1; } return 0; }

ll gcd(ll a, ll b)
{
    if (a < b) {
        a ^= b;
        b ^= a;
        a ^= b;
    }
    return b ? gcd(b, a % b) : a;
};

int main()
{
    cin.tie(0);
    ios::sync_with_stdio(false);
    
    int K;
    cin >> K;
    ll sum = 0;

    for (ll i = 1; i <= K; i++) {
        for (ll j = 1; j <= K; j++) {
            for (ll k = 1; k <= K; k++) {
                sum += gcd(i, gcd(j, k));
            }
        }
    }
    cout << sum << endl;
    return 0;
}

