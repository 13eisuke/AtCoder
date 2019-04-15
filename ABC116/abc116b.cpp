#include <iostream>
#include <algorithm>
#include <math.h>
#include <string.h>
#include <vector>

typedef long long ll;
using namespace std;


int main()
{
    int s, cnt = 1;
    cin >> s;
    char a[1000000] = {0};
    bool isfound = false;

    a[s] = 1;

    while (!isfound) {
        cnt++;
        if (s%2) {
            s = 3*s+1;
            if (a[s]) {
                cout << cnt << endl;
                return 0;
            }
            else a[s] = 1;
        }
        else {
            s = s/2;
            if (a[s]) {
                cout << cnt << endl;
                return 0;
            }
            else a[s] = 1;
        }
    }

}