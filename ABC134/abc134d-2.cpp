#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0;i<n;i++)

typedef long long ll;
ll MOD = 1000000007;

int main()
{
    int n;
    cin >> n;

    vector <int> a(n+1, 0), b(n+1, 0), ans;
    for (int i = 0; i < n; i++) cin >> a[i+1];

    for (int i = n; i >= 1; i--) {
        int sum = 0;
        for (int j = i*2; j <= n; j+=i) {
            sum += b[j];
        }
        if (sum % 2 != a[i]) {
            ans.push_back(i);
            b[i] = 1;
            //cout << i << endl;
        }
    }
    
    cout << ans.size() << endl;
    for (int i = 0; i < ans.size(); i++) {
        cout << ans[i] << " ";
    }
    cout << endl;
    return 0;
}
