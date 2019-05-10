#include <iostream>
#include <algorithm>
#include <math.h>
#include <string.h>
#include <vector>

typedef long long ll;
using namespace std;

int main()
{
    int a, b, x;
    cin >> a >> b >> x;

    if (a <= x && x <= a + b) cout << "YES" << endl;
    else cout << "NO" << endl;

    return 0;
}
