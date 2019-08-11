#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
ll MOD = 1000000007;

int main()
{
    int N;
    cin >> N;
    vector <int> a(N, 0);
    for (int i = 0; i < N; i++) cin >> a[i];
    int m = 0;
    for (int i = 0; i < N; i++) {
        if (m < a[i]) m = a[i];
        else {
            if (abs(m - a[i])>= 2) {
                cout << "No" << endl;
                return 0;
            }
        }
    }
    cout << "Yes" << endl;
    return 0;
}
