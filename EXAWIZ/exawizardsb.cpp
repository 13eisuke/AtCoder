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
    int N, r=0, b=0;
    char a;
    cin >> N;

    for (int i = 0; i < N; i++) {
        cin >> a;
        if (a == 'R')r++;
        else b++;
    }
    if (r > b) cout << "Yes" << endl;
    else cout << "No" << endl;
 
    return 0;
}