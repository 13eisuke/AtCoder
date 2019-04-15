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

    int m;
    m = max(a+b, max(a+a-1, b+b-1));
    cout << m << endl;
    return 0;
}
