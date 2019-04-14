#include <iostream>
#include <algorithm>
#include <math.h>
#include <string.h>
#include <vector>

typedef long long ll;
using namespace std;

int main()
{
    ll N, K, cnt = 1;
    string S;
    cin >> N >> K;
    cin >> S;

    vector <int> num;
    
    if (S[0] == '0') num.push_back(0);
    for (int i = 1; i < N; i++) {
        if (S[i-1] == S[i]) cnt++;
        else {
            if(S[i] == '0') {
                num.push_back(cnt);
                cnt = 1;
            }
            else {
                num.push_back(cnt);
                cnt = 1;
            }
        }
    }
    if (cnt != 0) num.push_back(cnt);
    if (S[N-1] == '0') num.push_back(0);

    vector <int> sum(num.size()+1, 0);
    for (int i = 0; i < num.size(); i++) {
        sum[i+1] = sum[i] + num[i];
    }
    int ans = 0;
    int add = 2*K + 1;

    for (int i = 0; i < num.size(); i+=2) {
        int left = i;
        int right = min(i+add, int(num.size()));
        ans = max(ans, sum[right] - sum[left]);
    }
    cout << ans << endl;

    return 0;
}
