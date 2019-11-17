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
    int n, tmp;
    string s;
    cin >> n >> s;
    tmp = n/2;
    if (n%2) cout << "No" << endl;
    else {
        for (int i = 0; i < n/2; i++) {
            if (s[i] != s[i+tmp]) {
                cout << "No" << endl;
                return 0;
            }
        }
        cout << "Yes" << endl;
    }
    return 0;
}

