#include <iostream>
#include <algorithm>
#include <math.h>
#include <string.h>
#include <vector>

typedef long long ll;
using namespace std;

int main()
{
    string s;
    cin >> s;

    int x = int((s[0]-'0')*10) + int(s[1]-'0');
    int y = int((s[2]-'0')*10) + int(s[3]-'0');
    //cout << x << y << endl;

    if ((1 <= x && x <= 12) && (1 <= y && y <= 12)) {
        cout << "AMBIGUOUS" << endl;
    } else if (1 <= x && x <= 12) {
        cout << "MMYY" << endl;
    } else if (1 <= y && y <= 12) {
        cout << "YYMM" << endl;
    } else {
        cout << "NA" << endl;
    }
    return 0;
}
