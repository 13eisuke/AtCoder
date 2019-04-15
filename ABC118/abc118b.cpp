#include <iostream>
#include <algorithm>
#include <math.h>
#include <string.h>
#include <vector>

typedef long long ll;
using namespace std;

int main()
{
    int n, m, k, ans =  0, tmp;
    cin >> n >> m;

    vector <int> a(m, 0);

    for (int i = 0; i < n; i++){
        cin >> k;
        for (int j = 0; j < k; j++){
            cin >> tmp;
            tmp--;
            a[tmp]++;
        }
    }

    for (int i = 0; i < m; i++){
        if(a[i] == n) ans++;
    }

    cout << ans << endl;

    return 0;
}