#include <iostream>
#include <algorithm>
#include <math.h>
#include <string.h>

typedef long long ll;
using namespace std;

int main()
{
    int n,k, a;

    cin >> n >> k;
    a = n % k;

    if (k > n) a = 1;
    if (a > 0) a = 1;
    cout << a << endl;
    return 0;
}
