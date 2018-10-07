#include <iostream>
#include <algorithm>
#include <math.h>
#include <string.h>

typedef long long ll;
using namespace std;

int main()
{
    int r, a, b;
    cin >> r;
    
    if(r == 1) {
        cout << "Hello World" << endl;
        return 0;
    }
    else{
        cin >> a >> b;
        cout << a + b << endl;
    }
    return 0;
}