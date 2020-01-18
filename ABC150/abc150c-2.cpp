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
    int N;
    cin >> N;
    vector <int> P(N), Q(N);
    for (int i = 0; i < N; i++) cin >> P[i];
    for (int i = 0; i < N; i++) cin >> Q[i];
    vector <int> v(N);
    iota(v.begin(),v.end(), 1);

    int a, b, i, j = 0;
    do {
        int c = 0;
        for (i = 0; i < N; i++) {
            //cout << v[i] << endl;
            if (v[i] == P[i]) c++;
        }
        if (c == N) a = j;
        c = 0;
        for (i = 0; i < N; i++) {
            if (v[i] == Q[i]) c++;
        }
        if (c == N) b = j;
        j++;
    } while (next_permutation(v.begin(), v.end()));
    //cout << a << " " << b << endl;
    cout << abs(a-b) << endl;
    return 0;
}
