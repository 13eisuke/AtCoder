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
    int a, b, c;
    cin >> a >> b >> c;
    if (a==b && b==c) cout << "Yes" << endl;
    else cout << "No" << endl;

    return 0;
}