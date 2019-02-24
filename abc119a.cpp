#include <iostream>
#include <algorithm>
#include <math.h>
#include <string.h>

typedef long long ll;
using namespace std;

int main()
{
    char s[30];
    int a, b, c;
    cin >> s;

    a = (s[0] - '0')*1000 + (s[1] - '0')* 100 + (s[2]-'0')*10 + s[3] - '0';
    b = (s[5] - '0')*10 + s[6] - '0';
    c = (s[8]-'0')*10 + s[9]-'0';


    if(a <= 2019 && b <= 4 && c <= 30)cout << "Heisei" << endl;
    else cout << "TBD" << endl;
    
    return 0;
}