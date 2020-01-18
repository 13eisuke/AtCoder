#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
const ll MOD = 1e9 + 7;
const ll inf = 1LL<<60;
const double eps = 1e-9;

int main()
{
    int n;
    cin >> n;
    map <string, bool> used;
    vector <string> tmp(n);
    char c;
    for (int i = 0; i < n; i++) cin >> tmp[i];
    c = tmp[0][0];
    for (int i = 0; i < n; i++) {
        if (tmp[i][0] != c or used[tmp[i]]) {
            if (i%2) cout << "WIN" << endl;
            else cout << "LOSE" << endl;
            return 0;
        }
        c = tmp[i][tmp[i].size()-1];
        used[tmp[i]] = true;
    }
    cout << "DRAW" << endl;
    return 0;
}

