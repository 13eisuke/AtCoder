#include <bits/stdc++.h>
using namespace std;
#define rep(i,l,r) for(int i=(int)(l);i<(int)(r);i++)

typedef long long ll;
ll MOD = 1000000007;

int main()
{
    int n, m;
    cin >> n >> m;
 
    vector <int> a(n), b(n);
    rep(i, 0, n) cin >> a[i] >> b[i];
 
    vector <vector <int> > c(100001);
    rep(i, 0, n) c[a[i]].push_back(b[i]);
 
    priority_queue <int> que;
    int ans = 0;
    rep(i, 1, m+1) {
        for (int j = 0; j < c[i].size(); j++) que.push(c[i][j]);
        if (!que.empty()) {
            ans += que.top();
            que.pop();
        }
    }
    cout << ans << endl;
    
    return 0;
}
