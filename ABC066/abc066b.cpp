#include <iostream>
#include <algorithm>
#include <math.h>
#include <string.h>
#include <vector>

typedef long long ll;
using namespace std;

ll Mod = 1e9 + 7;
int MAX = 100000000;
int main()
{
    string S;
    int cnt = 0;
    cin >> S;

    for (int i = S.size() - 2; i >= 0; i-=2) {
        int h = i/2;
        bool iseven = true;
        for (int j = 0; j < h; j++) {
            if(S[j] != S[j+h]) iseven = false;
        }
        if (iseven) {
            cout << i << endl;
            return 0;
        }
    }
}