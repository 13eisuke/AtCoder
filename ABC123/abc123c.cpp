#include <iostream>
#include <algorithm>
#include <math.h>
#include <string.h>
#include <vector>

typedef long long ll;
using namespace std;

ll Mod = 1e9 + 7;
int main()
{
    ll N, a, b, c, d, e;
    cin >> N >> a >> b >> c >> d >> e;
    ll m = min(a, min(b, min(c,min(d, e))));
    cout << (N-1) / m  + 5 << endl;


    return 0;
}