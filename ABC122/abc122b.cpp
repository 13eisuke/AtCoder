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
    int c, m = -1;

    cin >> s;

    for (int i = 0; i < s.size(); i++) {
        c = 0;
        if(s[i] == 'A' || s[i] == 'T' || s[i] == 'G' ||s[i] == 'C') {
            for(int j = i; j < s.size(); j++) {
                if(s[j] == 'A' || s[j] == 'T' || s[j] == 'G' ||s[j] == 'C') c++;
                else break;
            }
        }
        if (m < c) m = c;
    }

    cout << m << endl;
    return 0;
}
