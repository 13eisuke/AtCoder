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
    int n;
    string s;
    cin >> n >> s;

    for (int i = 0; i < int(s.size()); i++) {
        s[i] = ((s[i] - 'A' + n) % 26) + 'A'; 
    }
    
    cout << s << endl;
    return 0;
}

