#include <bits/stdc++.h>
using namespace std;
#define rep(i,l,r) for(int i=(int)(l);i<(int)(r);i++)

typedef long long ll;
ll MOD = 1000000007;

int main()
{   
    int m, d;
    cin >> m >> d;
    int c = 0;

    for (int i = 1; i <= m; i++) {
        for (int j = 1; j <= d; j++) {
            int x, y;
            x = j / 10;
            y = j - (j/10)*10;
            if (!(x >= 2 && y >= 2)) continue;
            if (i == x*y) c++;
        }
    }
    cout << c << endl;
    
    return 0;
}
