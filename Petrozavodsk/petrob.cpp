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
    int n;
    cin >> n;
    vector <ll> a(n), b(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    for (int i = 0; i < n; i++) {
        cin >> b[i];
    }
    ll temp1 = 0, temp2 = 0;
    for (int i = 0; i < n; i++) {
        if (a[i] < b[i]) {
            temp1 += ((b[i] - a[i]) / 2);
        } else {
            temp2 += a[i] - b[i];
        }
    }
    if (temp1 >= temp2) cout << "Yes" << endl;
    else cout << "No" << endl;

    return 0;
}
