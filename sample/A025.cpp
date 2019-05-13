#include <iostream>
#include <algorithm>
#include <math.h>
#include <string.h>
#include <vector>

typedef long long ll;
using namespace std;

ll N, S, T;
ll a[40] = {0}, b[40] = {0};
ll ans = 0;

ll bfs (ll day, ll weight) {
    if (day > N) {
        if (weight <= T) return 1;
        else return 0;
    }

    if (weight > T) return 0;
    return bfs(day + 1, weight - a[day]) + bfs(day + 1, weight + b[day]);
}


int main()
{
    cin >> N >> S >> T;
    for (int i = 1; i <= N; i++) {
        cin >> a[i] >> b[i];
    }

    ans = bfs(1, S);

    cout << ans << endl;
    
    return 0;
}