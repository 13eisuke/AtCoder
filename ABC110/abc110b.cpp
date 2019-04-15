#include <iostream>
#include <algorithm>
#include <math.h>
#include <string.h>

typedef long long ll;
using namespace std;

int main()
{
    int n, m, X, Y;
    int x[100], y[100];
    int x_max = -1000, y_min = 1000;

    cin >> n >> m >> X >> Y;

    for(int i=0; i<n; i++){
        cin >> x[i];
        if(x[i] >= x_max) x_max = x[i];

    }
    for(int i=0; i<m; i++){
        cin >> y[i];
        if(y[i] <= y_min) y_min = y[i];
    }

    if(X <= x_max && x_max < y_min && y_min < Y){
        cout << "No War" << endl;
    } else {
        cout << "War" << endl;
    }

    return 0;
}