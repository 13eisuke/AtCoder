#include <iostream>
#include <algorithm>
#include <math.h>
#include <string.h>
#include <vector>

typedef long long ll;
using namespace std;

int main()
{
    int n, x, k = 1e9;
    cin >> n >> x;
    vector <int> m(n, 0);
    for (int i = 0; i < n; i++) {
        cin >> m[i];
        x -= m[i];
        k = min(k, m[i]);
    }

    cout << n + x/k << endl; 
    return 0;
}