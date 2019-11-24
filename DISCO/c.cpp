#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
const ll MOD = 1e9 + 7;
const ll inf = 1LL<<60;
const double eps = 1e-9;

int main()
{
    int h, w, k;
    cin >> h >> w >> k;
    char cake[h][w];
    int used[h][w] = {0}, index[h] = {-1}, tmp = 0;
    vector <bool> here(h, false);

    for (int i = 0; i < h; i++) {
        for (int j = 0; j < w; j++) {
            cin >> cake[i][j];
            if (cake[i][j] == '#') {
                here[i] = true;
            }
        }
    }
    int first;
    for (int i = 0; i < h; i++) {
        if (here[i]) {
            first = i;
            break;
        }
    }
    int now = first;
    int num = 1, cnt = 0;
    for (int i = 0; i < h; i++) {
        if (here[i]) now = i;
        else index[i] = now;
    }

    //for (int i = 0; i < h; i++) cout << index[i] << endl;

    for (int i = 0; i < h; i++) {
        cnt = 0;
        if (here[i]) {
            for (int j = 0; j < w; j++) {
                if (cake[i][j] == '#') {
                    cnt++;
                    if (cnt > 1) num++;
                }
                used[i][j] = num;
            }
            num++;
        }
    }

    for (int i = 0; i < h; i++) {
        if (!here[i]) {
            for (int j = 0; j < w; j++) {
                used[i][j] = used[index[i]][j];
            }
        }
    }

    for (int i = 0; i < h; i++) {
        for (int j = 0; j < w; j++) {
            cout << used[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}