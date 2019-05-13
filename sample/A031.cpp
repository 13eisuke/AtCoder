#include <iostream>
#include <algorithm>
#include <math.h>
#include <string.h>
#include <vector>

typedef long long ll;
using namespace std;


int k, tmp, cnt = 0;
vector <int> p;
vector <ll> ans;    

void bfs(ll val, int cnt) {
    if (cnt > k) {
        ans.push_back(val);
        return;
    }
    bfs(val*p[0], cnt + 1);
    bfs(val*p[1], cnt + 1);
    bfs(val*p[2], cnt + 1);
    return;
}

int main()
{    
    for (int i = 0; i < 3; i++) {
        cin >> tmp;
        p.push_back(tmp);
    }
    cin >> k;
    sort(p.begin(), p.end());
    bfs(1, 0);
    ans.push_back(1);
    sort(ans.begin(), ans.end());
    cout << ans[k] << endl;
    return 0;
}