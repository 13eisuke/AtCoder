#include <bits/stdc++.h>
using namespace std;

#define all(x) (x).begin(),(x).end()
#define rep(i,l,r) for(int i=(int)(l);i<(int)(r);i++)

typedef long long ll;
const ll MOD = 1e9 + 7;
const ll inf = 1LL<<60;
const double eps = 1e-9;


int main()
{
    ll n, m;
    ll tmp;
    cin >> n >> m;
    priority_queue<ll> q;
    for (int i = 0; i < n; i++) {
        cin >> tmp;
        q.push(tmp);
    }

    for (int i = 0; i < m; i++) {
        tmp = q.top();
        q.pop();
        q.push(tmp/2);
    }
    ll sum = 0;
    for (int i = 0; i < n; i++) {
        sum += q.top();
        q.pop();
    }
    cout << sum << endl;
    return 0;
}
