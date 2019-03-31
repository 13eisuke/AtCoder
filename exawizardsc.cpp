#include <iostream>
#include <algorithm>
#include <math.h>
#include <string.h>
#include <vector>

typedef long long ll;
using namespace std;

ll Mod = 1e9 + 7;

int N, Q;
string S;
vector <char> s, t;

int isDropped (int now) {
    for (int i = 0; i < Q; i++) {
        if (now != -1 && now != N && S[now] == s[i]) {
            if (t[i] == 'R') now++;
            else now--;
        }
    }
    if (now == -1) return -1; //left drop
    else if (now == N) return 1; // right drop
    else return 0;
};


int main()
{
    cin >> N >> Q;
    cin >> S;

    for (int i = 0; i < Q; i++) {
		char a, b;
		cin >> a >> b;
		s.push_back(a);
		t.push_back(b);
    }

    int left = 0, right = N;
    // 左に落ちる右端
    while (right - left > 1) {
        int mid = (left + right) / 2;
        if (isDropped(mid) >= 0) {
            right = mid;
        } else {
            left = mid;
        }
    }
    int LE = right;

    // 右に落ちる左端
    left = 0; right = N;
    while (right - left > 1) {
        int mid = (left + right) / 2;
        if (isDropped(mid) <= 0) {
            left = mid;
        } else {
            right = mid;
        }
    }
    int RE = left;
    cout << RE - LE + 1<< endl;
    return 0;
}