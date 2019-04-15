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

    if (s[0] == s[2]) cout << "Yes" << endl;
    else cout << "No" << endl;
    return 0; 
}
