#include <iostream>
#include <algorithm>
#include <math.h>
#include <string.h>

typedef long long ll;
using namespace std;

ll gcd(ll a,ll b){
    if(a == 0) return b;
    else return gcd(b%a, a);
}

int main() {
	ll N, X, ans, M;
	cin >> N >> X;

	cin >> M;
	ans = abs(M-X);
	for (int i = 1; i < N; i++) {
		cin >> M;
		ans = gcd(ans, abs(M - X));
	}
	cout << ans << endl;
	return 0;
}