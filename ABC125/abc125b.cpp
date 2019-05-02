#include <iostream>
#include <algorithm>
#include <math.h>
#include <string.h>
#include <vector>

typedef long long ll;
using namespace std;

int main()
{
    int n, ans=0;
    cin >> n;
    vector <int> v(n, 0), c(n,0);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }
    for (int i = 0; i < n; i++) {
        cin >> c[i];
    }
    for (int i = 0; i < n; i++) {
        if (v[i] > c[i]) ans += v[i] - c[i];
    }   
    cout << ans << endl;
    return 0;
}