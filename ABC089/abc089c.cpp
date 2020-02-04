#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
const ll MOD = 1e9 + 7;
const ll inf = 1LL<<60;
const double eps = 1e-9;

typedef pair<ll, ll> P;

template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1; } return 0; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1; } return 0; }

int main()
{
    int N;
    ll cnt[5] = {0};
    ll sum = 0;
    string tmp = "MARCH";
    cin >> N;
    vector <string> s(N);
    for (int i = 0; i < N; i++) {
        cin >> s[i];
        for (int j = 0; j < tmp.size(); j++) {
            if (s[i][0] == tmp[j]) cnt[j]++;
        }
    }
    for (int i = 0; i < 5; i++) {
        for (int j = i+1; j < 5; j++) {
            for (int k = j+1; k < 5; k++) {
                sum += cnt[i] * cnt[j] * cnt[k];
            }
        }
    }
    cout << sum << endl;
        

    return 0;
}

