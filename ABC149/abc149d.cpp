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
    int N, K, R, S, P;
    ll ans = 0;
    string T;
    cin >> N >> K >> R >> S >> P;
    cin >> T;

    char M[1000000];
    int tmp_R=K, tmp_S=K, tmp_P=K;

    for (int i = 0; i < N; i++) {
        char tmp;
        if (i - K < 0) {
            tmp = 'x';
        } else {
            tmp = M[i-K];
        }
        if (T[i] == 'r' && (tmp != 'p')) {
            ans += P;
            M[i] = 'p';
        }
        if (T[i] == 's' && (tmp != 'r')) {
            ans += R;
            M[i] = 'r';
        }
        if (T[i] == 'p' && (tmp != 's')) {
            ans += S;
            M[i] = 's';
        }
    }
    cout << ans << endl;
    return 0;
}

