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
    int a = 1;
    for (int i = 0; i < int(s.size()); i++) {
        if (i%2) {
            if (!(s[i] == 'L' || s[i] == 'U' || s[i] == 'D')) a = 0;
        } else {
            if (!(s[i] == 'R' || s[i] == 'U' || s[i] == 'D')) a = 0;
        }
    }
    if (a) cout << "Yes" << endl;
    else cout << "No" << endl;
    return 0;
}
