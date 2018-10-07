#include <iostream>
#include <algorithm>
#include <math.h>
#include <string.h>

typedef long long ll;
using namespace std;

int main()
{
    int n, t, a, b, k=1001;
    cin >> n >> t;

    for(int i=0; i<n; i++){
        cin >> a >> b;
        if(a < k && b <= t){
            k = a;
        }
    }

    if(k == 1001){
        cout << "TLE" << endl;
    } else {
        cout << k << endl;
    }

  
    return 0;
}