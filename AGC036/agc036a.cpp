#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
ll MOD = 1000000007;


int main()
{
    ll S, a, b;
    cin >> S;
    
    b = (S-1)/1000000000 + 1;
    a = (b*1000000000) - S;

    cout << 0 << " " << 0 << " " << 1000000000 << " " << 1 << " " << a << " " << b << endl;

    return 0;
}
