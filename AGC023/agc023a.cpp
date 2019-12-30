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
    ll N, tmp;
    cin >> N;
    vector <ll> A(N+1, 0);
    map <ll, ll> num;
    for (int i = 0; i < N; i++) {
        cin >> tmp;
        A[i+1] = A[i] + tmp;
    }

    sort(A.begin(), A.end());

    ll ans = 0, now = A[0], cnt=0;
    A.emplace_back(inf);

    for (ll i = 0; i < N+2; i++) {
        if (A[i] == now) cnt++;
        else {
            ans += cnt*(cnt-1)/2;
            cnt = 1;
            now = A[i];
        }
    }

    cout << ans << endl;
    
    return 0;
}

