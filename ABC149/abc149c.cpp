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
    int n, i;
    cin >> n;

    for (i = n; i >= 0; i++) {
        int tmp = 1;
        for (int j = 2; j < sqrt(i); j++) {
            if (i % j == 0) {
                tmp = 0;
                break;
            }
        }
        if (tmp) break; 
    }
    cout << i<< endl;
    return 0;
}

