#include <bits/stdc++.h>
using namespace std;

#define all(x) (x).begin(),(x).end()
#define rep(i,l,r) for(int i=(int)(l);i<(int)(r);i++)

typedef long long ll;
const ll MOD = 1e9 + 7;
const ll inf = 1LL<<60;
const double eps = 1e-9;

ll GetDigit(ll num){
    ll digit=0;
    while(num!=0){
        num /= 10;
        digit++;
    }
    //cout << digit << endl;
    return digit;
}

int main()
{
    ll n, ans = 0;
    cin >> n;
    if (n %2) {
        cout << 0 << endl;
        return 0;
    }
    n /= 2;
    while (n) {
        ans += n/5;
        n /= 5;
    }
    cout << ans << endl;
    return 0;
}