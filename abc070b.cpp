#include <iostream>
#include <algorithm>
#include <math.h>
#include <string.h>
#include <vector>

typedef long long ll;
using namespace std;

int main()
{
    int a, b, c, d;
    cin >> a >> b >> c >> d;

    if (max(a, c) < min(b, d)) cout << min(b, d) -  max(a, c)<< endl;
    else cout << 0 << endl;
    return 0; 
}
