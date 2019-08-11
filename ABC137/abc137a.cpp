#include <bits/stdc++.h>
using namespace std;
#define rep(i,l,r) for(int i=(int)(l);i<(int)(r);i++)

typedef long long ll;
ll MOD = 1000000007;

int main()
{
    int a, b;
    cin >> a >> b;

    cout << max(a+b, max(a-b, a*b)) << endl;
    
    return 0;
}
