#include <iostream>
#include <algorithm>
#include <math.h>
#include <string.h>
#include <vector>

typedef long long ll;
using namespace std;

int main()
{
    int N, W = 0, B = 0;
    string S;
    cin >> N >> S;

    for (int i = 0; i < N; i++) {
        if (S[i] == '.') W++;
    }
    ll min = W;
    for (int i = 0; i < N; i++) {
		if (S[i] == '.')W--;
		if (S[i] == '#')B++;
		if (min > (W + B)) {
			min = (W + B);
		}
	}
    cout << min << endl;
    return 0;
}
