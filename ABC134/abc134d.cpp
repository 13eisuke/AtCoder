#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0;i<n;i++)

typedef long long ll;
ll MOD = 1000000007;

int main()
{
    int n;
    cin >> n;

    vector <int> a(n+1, 0), b(n+1, 0);
    for (int i = 0; i < n; i++) cin >> a[i+1];
    
    for (int i = n; i > 0; i--) {
        int t = 0;
        for (int j = i; j <= n; j += i) {
            t += b[j];
        }
        if (a[i] != (t%2)) b[i] = 1;
    }
    vector<int> ans;
    rep(i, n)if (b[i+1])ans.push_back(i+1);
	cout << ans.size() << endl;
	rep(i, ans.size()) {
		if (i > 0)cout << " ";
		cout << ans[i];
	}
	cout << endl;
    return 0;
}
