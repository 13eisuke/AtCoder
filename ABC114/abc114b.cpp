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
    int ans = 754;
    for (int i = 0; i < s.size() - 2; i++) { 
        int num = 100*(s[i]-'0') + 10*(s[i+1]-'0') + s[i+2]-'0';
        ans = min(ans, abs(753-num));
    }
    cout << ans << endl;
    return 0;
}
