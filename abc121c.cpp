#include <iostream>
#include <algorithm>
#include <math.h>
#include <string.h>
#include <vector>

typedef long long ll;

using namespace std;

int main()
{
    int N, M, tmp;
    ll ans = 0;
    cin >> N >> M;

    typedef pair<ll, ll> pair;
    vector<pair> pair_vec;

    for (int i = 0; i < N; i++) {
        ll tmp1, tmp2;
        cin >> tmp1 >> tmp2;
        pair_vec.push_back(pair(tmp1, tmp2));
    }

    std::sort(
        pair_vec.begin(),
        pair_vec.end(),
        [](const pair& x, const pair& y){return x.first < y.first;}
    );
    tmp = M;
    for(auto& i: pair_vec){
        if (tmp - i.second >= 0) {
            ans += i.first * i.second;
            tmp -= i.second;
        }
        else {
            ans += tmp*i.first;
            break;
        }
    }

    cout << ans << endl;
    
    return 0;
}
