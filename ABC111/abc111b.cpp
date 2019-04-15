#include <iostream>
#include <algorithm>
#include <math.h>
#include <string.h>

typedef long long ll;
using namespace std;

int main()
{
    int x;
    cin >> x;

    for(int i=111; i<=999; i+=111){
        if(i >= x){
            x = i;
            break;
        }
    }

    cout << x << endl;

    return 0;
}