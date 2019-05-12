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
    int N, ans = 0, x = 0, y = 0, z = 0;
    cin >> N;
    vector <string> s(N);
    int F[10000][2] = {0}, E[10000][2] = {0};
    for (int i = 0; i < N; i++) {
        cin >> s[i];
        //cout << s[i][s[i].size()-1] << endl;
        if (s[i][0] == 'B' && s[i][s[i].size()-1] == 'A') z++;
        else if (s[i][s[i].size()-1] == 'A') x++;
        else if (s[i][0] == 'B') y++;
        for (int j = 0; j < s[i].size()-2; j+=1) {
            if (s[i][j] == 'A' && s[i][j+1] == 'B') {
                ans++;
            }
        }
    }
    if (z == 0) {
        cout << ans + min(x, y) << endl;
    } else {
        if (x + y == 0) {
            cout << ans + z - 1 << endl;
        } else {
            cout << ans + z + min(x, y) << endl;
        }
    }

    return 0;
}