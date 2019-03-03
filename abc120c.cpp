#include <iostream>
#include <algorithm>
#include <math.h>
#include <string.h>

typedef long long ll;
using namespace std;

int main()
{
    string S;
    int a = 0,  b = 0;

    cin >> S;

    for (int i = 0; i < S.size(); i++) {
        if (S[i] == '0') a++;
        else b++;
    }

    cout << 2*min(a, b) << endl;

    
    return 0;
}