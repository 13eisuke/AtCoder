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
    int x;
    cin >> x;

    for (int i = 0; i <= x; i++) {
        if (floor(i*1.08) == x) {
            cout << i << endl;
            return 0;
        }
    }

    cout << ":(" << endl;
    
    return 0;
}

