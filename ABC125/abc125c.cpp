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
    int n, ans = 1, x = 0;
    cin >> n;
    vector <int> a(n, 0), b(n, 0), c(n, 0);

    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    b[0] = a[0];
    c[n-1] = a[n-1];

    for (int i = 1; i < n; i++) {
        b[i] = gcd(b[i-1], a[i]);
    }
    for (int i = n-2; i >= 0; i--) {
        c[i] = gcd(c[i+1], a[i]);
    }
    ans = max(b[n-2], c[1]);
    for (int i = 1; i < n-1; i++) {
        ans = max(ans, gcd(b[i-1], c[i+1]));
    }
    cout << ans << endl;
    return 0;
}