#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
const ll MOD = 1e9 + 7;
const ll inf = 1LL<<60;
const double eps = 1e-9;

int main()
{
    int N, M, ac = 0, wa = 0;
    cin >> N >> M;
    vector <int> p(M);
    vector <string> s(M);
    vector <int> tmp(N, 0), tmp2(N, 0);

    for (int i = 0; i < M; i++) {
        cin >> p[i] >> s[i];
        p[i]--;
        if (tmp[p[i]] == 0 && s[i] == "AC") {
            ac++;
            tmp[p[i]] = 1;
            wa += tmp2[p[i]];
        }
        if (s[i] == "WA") tmp2[p[i]]++;
    }
    cout << ac << " "  << wa << endl;
    return 0;
}

