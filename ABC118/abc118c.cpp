#include <iostream>
#include <algorithm>
#include <math.h>
#include <string.h>
#include <vector>

typedef long long ll;
using namespace std;

int gcd (int a, int b){
    int tmp;
    if (a < b) swap(a, b);

    while (b != 0){
        tmp = a % b;
        a = b;
        b = tmp;
    }
    return a;
}



int main()
{
    ll n;
    ll ans;
    cin >> n;

    ll a[n];

    for (int i = 0; i < n; i++){
        cin >> a[i];
    }

    ans = a[0];

    for (int i = 0; i < n; i++){
        ans = gcd(ans, a[i]);
    }

    cout << ans << endl;
    return 0;
}