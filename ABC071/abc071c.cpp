#include <iostream>
#include <algorithm>
#include <math.h>
#include <string.h>
#include <vector>
typedef long long ll;
using namespace std;


int main() {
    int N, cnt = 0;
    ll x[2];
    cin >> N;

    vector <ll> a(N, 0);


    for (int i = 0; i < N; i++) cin >> a[i];
    sort(a.begin(), a.end());

    for (int i = N - 1; i >= 1; i--) {
        if (a[i] == a[i-1]) {
            x[cnt] = a[i];
            cnt++;
            i--;
        }
        if (cnt == 2) break;
    }
    if (cnt < 2) cout << 0 << endl;
    else cout << x[0] * x[1] << endl;

	return 0;
}