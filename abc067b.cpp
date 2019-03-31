#include <iostream>
#include <algorithm>
#include <math.h>
#include <string.h>
#include <vector>

typedef long long ll;
using namespace std;

ll Mod = 1e9 + 7;
int MAX = -1;
int main()
{
    int N, K, sum = 0;
    cin >> N >> K;
    vector <int> l(N, 0);
 
    for (int i = 0; i < N; i++) cin >> l[i];

    sort(l.begin(), l.end(), greater<int>());
    for (int i = 0; i < K; i++) {
        sum += l[i];
    }

    cout << sum << endl;
    return 0;
}