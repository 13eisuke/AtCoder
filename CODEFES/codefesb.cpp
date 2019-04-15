#include <iostream>
#include <algorithm>
#include <math.h>
#include <string.h>

typedef long long ll;
using namespace std;

int main()
{
    int n, m, a, b;
    int l[105], r[105], sum = 0;
    bool flag[105] = {false};

    cin >> n >> m >> a >> b;
    for(int i=1; i<=m; i++){
        cin >> l[i] >> r[i];
    }

    for(int i=1; i<=m; i++){
        for(int j=l[i]; j<=r[i]; j++){
            flag[j] = true;
        }
    }

    for(int i=1; i<=n; i++){
        if(flag[i]) sum += a;
        else sum += b;
    }

    cout << sum << endl;

    return 0;
}