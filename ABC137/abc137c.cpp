#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
ll MOD = 1000000007;

int main()
{
    int N;
    cin >> N;
    vector <string> a(N);
    ll cnt = 0;
    for (int i = 0; i < N; i++) {
        cin >> a[i];
        sort(a[i].begin(), a[i].end());
    }

    sort(a.begin(), a.end());

    int i, j;
    for (i = 0; i < N; i=j) {
        ll tmp = 0;
        for (j = i + 1; j < N; j++) {
            if (a[i] != a[j]) break;
            tmp++;
        }
        cnt += (tmp+1)*(tmp)/2;
    }

    cout << cnt << endl;
    
    return 0;
}
