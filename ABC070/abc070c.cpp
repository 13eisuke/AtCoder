#include <iostream>
#include <algorithm>
#include <math.h>
#include <string.h>
#include <vector>

typedef long long ll;
using namespace std;

ll gcd(ll a,ll b){
    if(a == 0) return b;
    else return gcd(b%a, a);
}
 
ll lcm(ll a,ll b){
    return b / gcd(a,b)*a;
}

int main()
{
    int n;
    ll ans;
    cin >> n;
    vector <ll> t(n, 0);
    for (int i = 0; i < n; i++) cin >> t[i];
    ans = t[0];
    for (int i = 1; i < n; i++) {
        ans = lcm(ans, t[i]);
    }

    cout << ans << endl;
    return 0; 
}
