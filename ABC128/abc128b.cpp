#include <bits/stdc++.h>
using namespace std;

typedef long long ll;


int main()
{
    int N;
    string tmp1;
    int tmp2;
    vector < pair<string, int> > sp, sp2;
    cin >> N;
    for (int i = 0; i < N; i++) {
        cin >> tmp1 >> tmp2;
        sp.push_back(make_pair(tmp1, -1*tmp2));
        sp2.push_back(make_pair(tmp1, -1*tmp2));
    }
    sort(sp.begin(), sp.end());

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            if (sp[i].first == sp2[j].first && sp[i].second == sp2[j].second) {
                cout << j+1 << endl;
            }
        }
    }
    return 0;
}
