#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
ll MOD = 1000000007;
ll MOD1 = 2019;

template<typename T1,typename T2> inline void chmin(T1 &a,T2 b){if(a>b) a=b;}
template<typename T1,typename T2> inline void chmax(T1 &a,T2 b){if(a<b) a=b;}

int main()
{
    ll L, R, mi = 1LL<<60;
    cin >> L >> R;

    if (R - L >= 2019) {
        cout << 0 << endl;
        return 0;
    } else {
        for (ll i = L; i < R; i++) {
            for (ll j = i+1; j <= R; j++) {
                chmin(mi, i*j%2019);
            }
        }
    }
    cout << mi << endl;
    return 0;
}
