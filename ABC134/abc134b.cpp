#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
ll MOD = 1000000007;

int main()
{
    int N, D;
    cin >> N >> D;

    if (N % (2*D+1) == 0) cout << N/(2*D+1) << endl;
    else cout << N/(2*D+1)+1 << endl;
    
    return 0;
}
