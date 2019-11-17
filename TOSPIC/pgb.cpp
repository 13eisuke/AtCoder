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
    string s;
    cin >> s;
    string a = "AtCoder", b = "ATCODER", c = "atcoder";
    bool x = true, y = true;
    for (int i = 0; i < 7; i++) {
        if (s[i] != a[i]) x = false; 
    }
    
    if (x) {
        cout << "Yes" << endl;
        return 0;
    } else {
        for (int i = 0; i < 7; i++) {
            if (!((s[i] == b[i]) || (s[i] == c[i]))) y = false; 
        }
    }
    if (y) {
        cout << "Maybe" << endl;
    } else {
        cout << "No" << endl;
    }
    return 0;
}
