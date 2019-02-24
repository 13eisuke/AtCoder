#include <iostream>
#include <algorithm>
#include <math.h>
#include <string.h>

typedef long long ll;
using namespace std;

int main()
{
    int n;
    cin >> n;
    float a, sum = 0.0;
    char s[10];

    for (int i=0; i < n; i++) {
        cin >> a >> s;
        if(strcmp(s, "JPY") == 0) sum += a;
        else sum += 380000.0 * a;
    }
    cout << sum << endl;
    return 0;
}