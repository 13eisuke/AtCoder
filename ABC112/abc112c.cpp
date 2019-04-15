#include <iostream>
#include <algorithm>
#include <math.h>
#include <string.h>

typedef long long ll;
using namespace std;

int main()
{
    int n;
    ll x[100], y[100], cx, cy, H;
    ll h[100], tmp1,tmp2;
    cin >> n;

    for(int i=0; i<n; i++){
        cin >> x[i] >> y[i] >> h[i];

    }
 
    for(ll i=0; i<=100; i++){
        for(ll j=0; j<=100; j++){
            for(int k=0; k<n; k++){
                if(h[k] > 0){
                    H = h[k] + abs(x[k]-i) + abs(y[k]-j);
                    break;
                }
            }
            bool check = true;
            for (ll k=0;k<n;k++) {
                if (max(H-abs(x[k]-i)-abs(y[k]-j),(ll)0)!=h[k]) {
                    check=false;
                    break;
                    }
            }
            if (check) {
                cout << i << ' ' << j << ' ' << H << endl;
                return 0;
                }
        }
    }
}
