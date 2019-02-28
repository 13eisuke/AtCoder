#include <iostream>
#include <algorithm>
#include <math.h>
#include <string.h>
#include <vector>

typedef long long ll;
using namespace std;

int main()
{
    int N, max = -1;
    string S;

    cin >> N >> S;

    for (int i = 0; i < N; i++) {
        int count = 0;
        int a[26] = {0};
        int b[26] = {0};
        for (int j = 0; j < i; j++) {
            a[int(S[j] - 'a')]++;
        }
        for (int k = i; k < N; k++) {
            b[int(S[k] - 'a')]++;
        }

        for (int l = 0; l < 26; l++) {
            if(a[l] * b[l] > 0) count++;
        }
        if (max <= count) max = count;
    }

    cout << max << endl;

    return 0;
}
