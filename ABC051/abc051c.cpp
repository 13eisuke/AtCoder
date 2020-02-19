#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
const ll MOD = 1e9 + 7;
const ll inf = 1LL<<60;
const double eps = 1e-9;

int main()
{
    int sx, sy, tx, ty;
    cin >> sx >> sy >> tx >> ty;

    for (int i = 0; i < ty-sy; i++) cout << "U";
    for (int i = 0; i < tx-sx; i++) cout << "R";
    for (int i = 0; i < ty-sy; i++) cout << "D";
    for (int i = 0; i < tx-sx; i++) cout << "L";
    cout << "L";
    for (int i = 0; i < ty-sy+1; i++) cout << "U";
    for (int i = 0; i < tx-sx+1; i++) cout << "R";
    cout << "DR";
    for (int i = 0; i < ty-sy+1; i++) cout << "D";
    for (int i = 0; i < tx-sx+1; i++) cout << "L";
    cout << "U" << endl;    
    return 0;
}
//UURDDLLLUUURRDRDDDLLLU
//UURDDLLUUURRDRDDDLLU
//UURDDLLUUURRDRDDDLLU

//UUURRRDDDLLLLUUUURRRRDRDDDDLLLLU
//UURRURRDDDLLDLLULUUURRURRDDDLLDL
