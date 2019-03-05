#include <iostream>
#include <algorithm>
#include <math.h>
#include <string.h>
#include <vector>

typedef long long ll;
using namespace std;

int main()
{
    ll N, med, sum = 0;
    cin >> N;
    vector <ll> a(N, 0);

    for (ll i = 0; i < N; i++) {
        cin >> a[i];
        a[i] -= i + 1;
    }

    sort(a.begin(), a.end());

    if (N%2 == 0) med = (a[N/2] + a[N/2-1])/2;
    else med = a[(N - 1)/2];

    for (int i = 0; i < N; i++) {
        sum += abs(a[i] - med);
    }

    cout << sum << endl;

    return 0;
}
