#include <bits/stdc++.h>
#include <bitset>
using namespace std;

typedef long long ll;

int main()
{
    int N, M, tmp, ans = 0;
    cin >> N >> M;
    vector <int> k(M), p, s[M];
    for (int i = 0; i < M; i++) {
        cin >> k[i];
        for (int j = 0; j < k[i]; j++) {
            cin >> tmp;
            s[i].push_back(tmp);
        }
    }
    for (int i = 0; i < M; i++) {
        cin >> tmp;
        p.push_back(tmp);
    }
/*
    for (int bit = 0; bit << N; bit++) {
        bool x = true;
        for (int i = 0; i < M; i++) {
            int cnt = 0;
            for (int j = 0; j < k[i]; j++) {
                if (bit && 1<<j) cnt++;
            }
            if (cnt%2 != p[i]) x = false;
        }
        if (x) ans++;
    }
    cout << ans << endl;*/
    return 0;
}