#include <iostream>
#include <algorithm>
#include <math.h>
#include <string.h>
#include <vector>

typedef long long ll;
using namespace std;

int main()
{
    int A, B, C, K, MAX, tmp;
    cin >> A >> B >> C;
    cin >> K;

    MAX = max(A, max(B, C));
    tmp = A + B + C - MAX;

    for (int i = 0; i < K; i++) {
        MAX *= 2;
    }
    cout << MAX + tmp  << endl;

    return 0;
}
