#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
const ll MOD = 1e9 + 7;
const ll inf = 1LL<<60;
const double eps = 1e-9;

ll gcd(ll a, ll b)
{
    if (a < b) {
        a ^= b;
        b ^= a;
        a ^= b;
    }
    
    return b ? gcd(b, a % b) : a;
}
int main()
{
    ll a, b, g, cnt=0;
    cin >> a >> b;
    g = gcd(a, b);

    for(ll i = 2; i * i <= g; i++){
        if(g % i == 0){
            cnt++;
            while(g % i == 0) g /= i;
        }
    }
    if (g != 1) cnt++;
	cout << cnt+1 << endl;
    return 0;
}

