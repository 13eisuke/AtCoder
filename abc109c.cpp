#include "iostream"
#include "climits"
#include "list"
#include "queue"
#include "stack"
#include "set"
#include "functional"
#include "algorithm"
#include "string"
#include "map"
#include "unordered_map"
#include "unordered_set"
#include "iomanip"
#include "cmath"
#include "random"
#include "bitset"
#include "cstdio"
#include "numeric"
#include "ctime"

using namespace std;

const long long int MOD = 1000000007;
const long double EPS = 1e-8;

long long int N, M, K, H, W, L, R;

long long int gcd(long long int a, long long int b) {
	if (a < b)swap(a, b);
	while (b) {
		a %= b;
		swap(a, b);
	}
	return a;
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);

	cin >> N >> K;
	long long int ans = 0;
	cin >> M;
	ans = abs(M-K);
	for (int i = 1; i < N; i++) {
		cin >> M;
		ans = gcd(ans, abs(M - K));
	}
	cout << ans << endl;
	return 0;
}