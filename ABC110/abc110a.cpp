#include <iostream>
#include <algorithm>
#include <math.h>
#include <string.h>

typedef long long ll;
using namespace std;

int main()
{
    int a, b, c;
    int m, sum = 0;

    cin >> a >> b >> c;

    m = a;
    if(m < b) m = b;
    if(m < c) m = c;

    if(m==a){
        sum = 10*a + b + c;
    }
    if(m==b){
        sum = 10*b + a + c;
    }
    if(m==c){
        sum = 10*c + a + b;
    }

    cout << sum << endl;
    return 0;
}