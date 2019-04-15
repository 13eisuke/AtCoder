#include <iostream>
#include <algorithm>
#include <math.h>
#include <string.h>
#include <vector>

typedef long long ll;
using namespace std;

int main()
{
    int N, K;
    cin >> N >> K;
    
    vector <int> x(N, 0);
    for (int i = 0; i < N; i++) {
        cin >> x[i];
    }
    ll sum = 1e18;
    for (int i = 0; i < N - K + 1; i++) {
        ll tmp = x[i+K-1] - x[i];
        sum = min(sum, min(tmp+abs(x[i+K-1]),tmp+abs(x[i])));
        //cout << sum << endl;
    }
    cout << sum << endl;

    
    return 0;
}