#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0;i<n;i++)

typedef long long ll;
ll MOD = 1000000007;

int main()
{
    int n;
    cin >> n;

    vector <pair<int, int> > r(n), b(n);
    for (int i = 0; i < n; i++) cin >> r[i].first >> r[i].second;
    for (int i = 0; i < n; i++) cin >> b[i].first >> b[i].second;

    //sort(r.begin(), r.end());
    //reverse(r.begin(), r.end());

    sort(b.begin(), b.end());
    
    int ans = 0;
    bool used[n] = {false};

    for (int i = 0; i < n; i++) {
        int idx = -1;
        int now = -1;
        
        for (int j = 0; j < n; j++) {
            if ((r[j].first < b[i].first) and (r[j].second < b[i].second) and !used[j]) {
                if (r[j].second > now) {
                    idx = j;
                    now = r[j].second;
                } 
            }
        }
        if (idx == -1) continue;
        used[idx] = true;
        ans++;
    }
    cout << ans << endl;
    return 0;
}
