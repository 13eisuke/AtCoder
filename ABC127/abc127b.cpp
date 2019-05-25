#include <bits/stdc++.h>

typedef long long ll;
using namespace std;

int main()
{
    int r, d, x;
    cin >> r >> d >> x;
    int tmp = x;

    for (int i = 0; i < 10; i++) {
        int tmp1 = r*tmp - d;
        cout << tmp1 << endl;
        tmp = tmp1;
    }
    return 0;
}
