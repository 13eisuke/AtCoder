#include <iostream>
#include <algorithm>
#include <math.h>
#include <string.h>
#include <vector>

typedef long long ll;
using namespace std;

int main()
{
    int a, b;

    cin >> a >> b;

    if (a <= b) cout << a << endl;
    else cout << a - 1 << endl;

    return 0;
}
