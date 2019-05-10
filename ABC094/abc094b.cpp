#include <iostream>
#include <algorithm>
#include <math.h>
#include <string.h>
#include <vector>

typedef long long ll;
using namespace std;

int main()
{
    int N, M, X;
    int A[100] = {0}, tmp, ans1 = 0, ans2 = 0;

    cin >> N >> M >> X;
    for (int i = 0; i < M; i++) {
        cin >> tmp;
        A[tmp-1]++;
    }

    for (int i = X-1; i < N; i++) {
        if (A[i]) ans1++;
    }

    for (int i = X-1; i >= 0; i--) {
        if (A[i]) ans2++;
    }
    
    cout << min(ans1, ans2) << endl;

    return 0;
}
