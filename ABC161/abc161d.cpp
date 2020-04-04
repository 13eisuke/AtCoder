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

int main()
{
    cin.tie(0);
    ios::sync_with_stdio(false);
    
    int k, cnt = 0;
    cin >> k;

    priority_queue<int, vector<ll>, greater<ll>> que;
    
    for (ll i = 1; i < 10; i++) {
        que.emplace(i);
    }
    ll now;
    while (cnt < k) {
        now = que.top();
        que.pop();
        cnt++;

        ll last = now % 10;
        if (last - 1 >= 0) que.emplace(now*10 + last-1);
        que.emplace(now*10 + last);
        if (last + 1 <= 9) que.emplace(now*10 + last+1);
    }

    cout << now << endl;

    return 0;
}

