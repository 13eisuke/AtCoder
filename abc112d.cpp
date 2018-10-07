#include <iostream>
#include <algorithm>
#include <math.h>
#include <string.h>

typedef long long ll;
using namespace std;

int main()
{
    ll n, m, ans=1, a, b;


    cin >> n >> m;

    for(int i=1; i*i<=m; i++){
        if(m % i != 0) continue;
        a = i;
        b = m / i;
        if(a * n <= m) ans = max(ans, a);
        if(b * n <= m) ans = max(ans, b);
    }

    cout << ans << endl;
    return 0;
}