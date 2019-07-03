#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
ll MOD = 1000000007;

int main()
{
    int n, x, now = 0, c = 0; 
    cin >> n >> x;
    vector <int> l(n,0);
    for (int i = 0; i < n; i++) cin >> l[i];

    for (int i = 0; i < n; i++) {
        //cout << now << endl;
        if (now <= x) c++;
        now += l[i];
    }
    if (now <= x) c++;
    cout << c << endl;
    return 0;
}
