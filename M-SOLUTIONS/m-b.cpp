#include <bits/stdc++.h>
using namespace std;

typedef long long ll;


int main()
{
    string s;
    cin >> s;
    int cnt = 0;

    for (int i = 0; i < s.size(); i++) {
        if (s[i] == 'o') cnt++;
    }
    if (cnt + (15-int(s.size())) >= 8) cout << "YES" << endl;
    else cout << "NO" << endl;
    return 0;
}
