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
    string s;
    cin >> s;
    if (s == "SUN") cout << 7 << endl;
    if (s == "MON") cout << 6 << endl;
    if (s == "TUE") cout << 5 << endl;
    if (s == "WED") cout << 4 << endl;
    if (s == "THU") cout << 3 << endl;
    if (s == "FRI") cout << 2 << endl;
    if (s == "SAT") cout << 1 << endl;
    return 0;
}

