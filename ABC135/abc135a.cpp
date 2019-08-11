#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
ll MOD = 1000000007;

int main()
{
    int a, b;
    cin >> a >> b;

    if (a%2 != b%2) cout << "IMPOSSIBLE" << endl;
    else cout << (a+b)/2 << endl;
    
    return 0;
}
