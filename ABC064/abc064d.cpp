#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
ll MOD = 1000000007;

typedef long long ll;

int main()
{
    int n, x = 0;
    string s, ans;

    cin >> n >> s;

    for (int i = 0; i < n; i++) {
        if (s[i] == '(') {
            x++;
            ans += '(';
        } else {
            if (x) {
                x--;
                ans += ')';
            } else {
                ans = '(' + ans + ')';
            }
        }
    }
    while (x) {
        ans += ')';
        x--;
    }
    cout << ans << endl;

    return 0;
}
