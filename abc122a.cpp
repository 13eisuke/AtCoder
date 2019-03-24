#include <iostream>
#include <algorithm>
#include <math.h>
#include <string.h>
#include <vector>

typedef long long ll;
using namespace std;

int main()
{
    char a;

    cin >> a;

    if (a == 'A')cout << "T"<< endl;
    if (a == 'T')cout << "A"<< endl;
    if (a == 'G')cout << "C"<< endl;
    if (a == 'C')cout << "G"<< endl;
    return 0;
}
