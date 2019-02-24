#include <iostream>
#include <algorithm>
#include <math.h>
#include <string.h>

typedef long long ll;
using namespace std;

int N, A, B, C;
int l[1004];

int dfs(int cur, int a, int b, int c) {
    if (cur == N) {
        if (min(A, min(B, C)) > 0) return abs(a - A) + abs(b - B) + abs(c - C) - 30;
	    else return 100000000;
	}
    int ret[4] = {0};

    ret[0] = dfs(cur + 1, a, b, c);
    ret[1] = dfs(cur + 1, a + l[cur], b, c) + 10;
    ret[2] = dfs(cur + 1, a, b + l[cur], c) + 10;
    ret[3] = dfs(cur + 1, a, b, c + l[cur]) + 10;
    
    return min(ret[0], min(ret[1], min(ret[2], ret[3])));
}


int main()
{

    cin >> N >> A >> B >> C;

    for (int i = 0; i < N; i++) {
        cin >> l[i];
    }

    cout << dfs(0, 0, 0, 0) << endl;


    return 0;
}