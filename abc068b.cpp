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
    int N, ans = -1, cnt, A;
    cin >> N;

    for (int i = 1; i <= N; i++) {
        cnt = 0;
        int tmp = i;
        while (tmp%2 == 0) {
            tmp = tmp / 2;
            cnt++;
        }
        if (ans < cnt) {
            A = i;
            ans = cnt;
        }
    }
    cout << A << endl;
    return 0;
}