#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
ll MOD = 1000000007;

int main()
{
    int N, tmp;
    cin >> N;
    vector <int> a(N, 0), b(N, 0);
    for (int i = 0; i < N; i++) {
        cin >> tmp;
        a[i] = tmp;
        b[i] = tmp;
    }
    sort(b.begin(), b.end());

    for (int i = 0; i < N; i++) {
        if (a[i] == b[N-1]) cout << b[N-2] << endl;
        else cout << b[N-1] << endl;
    }
    
    return 0;
}
