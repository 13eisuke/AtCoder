#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
ll MOD = 1000000007;

int main()
{
    string s;
    cin >> s;
    for (int i = 1; i <= 3; i++) {
        if (s[i-1] == s[i]) {
            cout << "Bad" << endl;
            return 0;
        }
    }
    cout << "Good" << endl;
    return 0;
}
