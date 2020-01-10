#include <bits/stdc++.h>
using namespace std;

#define all(x) (x).begin(),(x).end()
#define rep(i,l,r) for(int i=(int)(l);i<(int)(r);i++)

typedef long long ll;
const ll MOD = 1e9 + 7;
const ll inf = 1LL<<60;
const double eps = 1e-9;



int main()
{
    int N, c = 0;
    string S;
    cin >> N >> S;
    for (int i = 0; i < N-2; i++) {
        if (S[i] == 'A' && S[i+1] == 'B' && S[i+2] == 'C') c++;
    }
    cout << c << endl;
    return 0;
}

