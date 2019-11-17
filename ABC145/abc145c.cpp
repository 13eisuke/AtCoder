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
    int n;
    cin >> n;
    vector <double> x(n), y(n);
    vector <int> used(n, 0);
    for (int i = 0; i < n; i++) {
        cin >> x[i] >> y[i];
    }
    double sum = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i != j) {
                if (used[j]) continue;
                sum += sqrt(abs(x[i]-x[j])*abs(x[i]-x[j]) + abs(y[i]-y[j])*abs(y[i]-y[j]))*2;
            }
            used[i] = 1;
        }
    }
    int tmp1 = 1, tmp2 = 1;
    for (int i = 1; i <= n; i++) tmp1 *= i;
    for (int i = 1; i <= n-1; i++) tmp2 *= i;
    cout << setprecision(10) << (sum*tmp2) / tmp1<< endl;
    return 0;
}

