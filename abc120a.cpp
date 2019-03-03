#include <iostream>
#include <algorithm>
#include <math.h>
#include <string.h>

typedef long long ll;
using namespace std;

int main()
{
    int a, b, c;

    cin >> a >> b >> c;

    if ( b / a > c) cout << c << endl;
    else cout << b / a << endl;
    return 0;
}