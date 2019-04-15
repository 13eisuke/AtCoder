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
    ll N, x;
    ll isodd = 0, is4 = 0, iseven = 0;
    cin >> N;
    for (int i = 0; i < N; i++) {
        cin >> x;
        if (x % 4 == 0) is4++;
        else if (x % 2 == 1) isodd++;
        else iseven++;
    }
    if (iseven) {
        if (is4 >= isodd) cout << "Yes" << endl;
        else cout << "No" << endl;
    } else {
        if (is4 >= isodd - 1) cout << "Yes" << endl;
        else cout << "No" << endl;
    }
 
        
    return 0;
}