#include <iostream>
#include <algorithm>
#include <math.h>
#include <string.h>

typedef long long ll;
using namespace std;

int main()
{
    int a, b;

    cin >> a >> b;
    swap(a, b);

    cout << a - b << endl;
    return 0;
}