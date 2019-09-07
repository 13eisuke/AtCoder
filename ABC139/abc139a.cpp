#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
const ll MOD = 1e9 + 7;
const ll inf = 1LL<<60;
const double eps = 1e-9;

int main()
{
    string s, t;
    cin >> s >> t;
    int c = 0;
    for (int i = 0; i < 3; i++) {
        if (s[i] == t[i]) c++;
    }
    cout << c << endl;
    return 0;
}
