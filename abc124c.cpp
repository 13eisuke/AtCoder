#include <iostream>
#include <algorithm>
#include <math.h>
#include <string.h>
#include <vector>

typedef long long ll;
using namespace std;

int main()
{
    string S;
    cin >> S;
    char a = S[0];
    ll sum = 0;

    for (int i = 0; i < S.size(); i++) {
        if (i%2) {
            if (S[i] == a) sum++;
        }
        else {
            if (S[i] != a) sum++;
        }
    }
    if (sum < S.size() - sum) cout << sum << endl;
    else cout << S.size() - sum << endl;

    return 0;
}
