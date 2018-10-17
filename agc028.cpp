#include <iostream>
#include <algorithm>
#include <math.h>
#include <string.h>

typedef long long ll;
using namespace std;

ll gcd( ll m, ll n )
{
	if((0 == m) || (0 == n))
		return 0;
	
	while(m != n)
	{
		if(m > n) m = m - n;
		else n = n - m;
	}
	return m;
}

ll lcm(ll m, ll n)
{
	if((0 == m) || (0 == n))
		return 0;

	return ((m / gcd(m, n)) * n);
}

int main()
{
    ll N, M, tmp, a, b, k, l;
    string S, T;

    cin >> N >> M;
    cin >> S >> T;

    tmp = lcm(N, M);
    a = tmp/N;
    b = tmp/M;

    k = lcm(a, b);

    for(ll i=0; i<tmp; i+=k){
        if(S[i/a] != T[i/b]){
            cout << "-1" << endl;
            return 0;
        }
    }

    cout << tmp << endl;
    return 0;
}
