#include <iostream>
#include <algorithm>
#include <math.h>
#include <string.h>

typedef long long ll;
using namespace std;

int main()
{
    int n, m, Q;
    int x, y, ans, p, q;
    int sum[505][505];

    cin >> n >> m >> Q;

    for(int i=0; i<m; i++){
        cin >> x >> y;
        sum[x][y]++;
    }

    for(int i=1; i<=n; i++){
        for(int j=1; j<=n; j++){
            sum[i][j] += sum[i][j-1];
        }
    }

    for(int i=0; i<Q; i++){
        cin >> p >> q;
        ans = 0;
        for(int j=p; j<=q; j++){
            ans+=sum[j][q]-sum[j][j-1];
        }
        cout << ans << endl;
    }

    return 0;
}