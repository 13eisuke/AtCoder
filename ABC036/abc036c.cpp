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
    
    int n;
    cin >> n;

    vector <int> a(n), b(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        b[i] = a[i];
    
    } 
    sort(a.begin(), a.end());

    int tmp = a[0];
    int cnt = 0;
    map<int, int> ma;
    ma[tmp] = cnt;

    for (int i = 0; i < n; i++) {
        if (a[i] != tmp) {
            cnt++;
            tmp = a[i];
            ma[a[i]] = cnt; 
        }
    }

    for (int i = 0; i < n; i++) {
        cout << ma[b[i]] << endl;
    }

    return 0;
}

