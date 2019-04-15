#include <iostream>
#include <algorithm>
#include <math.h>
#include <string.h>
#include <vector>

typedef long long ll;
using namespace std;

int main()
{
    int H, W, cnt = 0;
    char s[55][55];

    cin >> H >> W;

    for (int i = 1; i <= H; i++) {
        for (int j = 1; j <= W; j++) {
            cin >> s[i][j];
        }
    }

    for (int i = 1; i <= H; i++) {
        for (int j = 1; j <= W; j++) {
            if (s[i][j] == '#' && s[i-1][j] != '#' && s[i+1][j] != '#' && s[i][j-1] != '#' && s[i][j+1] != '#') cnt++;
        }
    }

    if (cnt == 0) cout << "Yes" << endl;
    else cout <<  "No" << endl;

    return 0;
}
