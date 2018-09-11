#include <iostream>
#include <algorithm>
#include <math.h>
#include <string.h>

typedef long long ll;
using namespace std;

int main()
{
    int x1, y1, x2, y2;
    cin >> x1 >> y1 >> x2 >> y2;
    int a, b, i, j, k, l;
    a = x2 - x1;
    b = y2 - y1;



    cout << x2 - b<<" " <<  y2 + a<< " "<< x1 - b << " "<< y1 + a << endl;
    
    return 0;
}