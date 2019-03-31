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
    int N, M;
    vector <int> tmp[100001];
    int P[100000], Y[100000];
    cin >> N >> M;
    for (int i = 0; i < M; i++) {
        cin >> P[i] >> Y[i];
        tmp[P[i]].push_back(Y[i]);
    }
    
    for (int i = 0; i < N; i++) {
        sort(tmp[i+1].begin(), tmp[i+1].end());
    }

    for (int i = 0; i < M; i++) {
        printf("%012lld\n", ll(P[i])*1000000 + int(lower_bound(tmp[P[i]].begin(), tmp[P[i]].end(), Y[i]) - tmp[P[i]].begin())+1);
    }

    return 0;
}