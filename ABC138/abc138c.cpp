#include <bits/stdc++.h>
using namespace std;
#define rep(i,l,r) for(int i=(int)(l);i<(int)(r);i++)

typedef long long ll;
ll MOD = 1000000007;

int main()
{
    int n, cnt = 0;
    cin >> n;
    vector <float> a(n, 0);
    for (int i = 0; i < n; i++) cin >> a[i];
    sort(a.begin(), a.end());

    for (int i = 0; i < n-1; i++) {
        a[i+1] = (a[i]+ a[i+1]) / 2.0;
    }
    cout << a[n-1] << endl;
    
    return 0;
}
