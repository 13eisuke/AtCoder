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
    int n, sum=0;
    cin >> n;
    vector <int> d(n);
    for (int i = 0; i < n; i++) cin>> d[i];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i == j) continue;
            sum += d[i] * d[j];
        }
    }
    cout << sum/2 << endl;
    return 0;
}

