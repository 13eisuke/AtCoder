#include <iostream>
#include <algorithm>
#include <math.h>
#include <string.h>
#include <vector>

typedef long long ll;
using namespace std;

int N;
int ans = 0;

void dfs(ll n, int a, int b, int c)
{
    if (n > N) return;

    if (a == 1 && b == 1 && c == 1) ans++;
    dfs(10 * n + 3, 1, b, c);
    dfs(10 * n + 5, a, 1, c);
    dfs(10 * n + 7, a, b, 1);
    return;
}

int main()
{
    cin >> N;

    dfs(0, 0, 0, 0);
    cout << ans << endl;
    
    return 0;
}
