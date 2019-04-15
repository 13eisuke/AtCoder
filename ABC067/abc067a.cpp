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
    int a, b;
    cin >> a >> b;

    if (a%3 == 0 || b%3 == 0 || (a+b)%3 == 0) cout << "Possible" << endl;
    else cout << "Impossible" << endl;

    return 0;
}