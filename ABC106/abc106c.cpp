#include <iostream>
#include <algorithm>
#include <math.h>
#include <string.h>

typedef long long ll;
using namespace std;

int main()
{
    string s;
    int k, i, c=0;

    cin >> s;
    cin >> k;

    for(i=0; i<s.size(); i++){
        if(s[i] != '1') break;
        c++;
    }

    if(k < i+1) cout << 1 << endl;
    else cout << s[i] << endl;
    return 0;
}