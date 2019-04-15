#include <iostream>
#include <algorithm>
#include <math.h>
#include <string.h>

typedef long long ll;
using namespace std;

int main()
{
    int a;

    cin >> a;

    if(a%2==0) cout << (a/2)*(a/2) << endl;
    else cout << (a+1)/2*(a-1)/2 << endl;
    return 0;
}