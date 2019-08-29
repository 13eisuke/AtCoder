#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
ll MOD = 1000000007;

int main()
{
    int N, cnt = 0;
    cin >> N;
    set <int> s;
    for (int i = 0; i < N; i++) {
        int tmp;
        cin >> tmp;
        if (tmp >= 3200) {
            cnt++;
            continue;
        }
        s.insert(tmp/400);
    }
    cout << max(1, int(s.size())) << " " << int(s.size()) + cnt << endl;

    return 0;
}
