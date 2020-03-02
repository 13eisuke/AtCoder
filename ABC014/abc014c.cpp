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

int table[1000000+2] = {};

int main()
{
    int n;
    cin >> n;

    for (int i = 0; i < n; i++) {
        int a, b;
        cin >> a >> b;
        table[a]++;
        table[b+1]--;
    }

    for (int i = 0; i <= 1000000; i++) {
        if (i > 0) table[i] += table[i-1];
    }

    int m = 0;

    for (int i = 0; i <= 1000000; i++) {
        if (m < table[i]) m = table[i];
    }
    cout << m << endl;

    return 0;
}

