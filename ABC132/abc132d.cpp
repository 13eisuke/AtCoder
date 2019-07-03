#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
ll MOD = 1e9 + 7;

// n^(exponent)を計算 O(logN)
ll pow(ll n, ll exponent) {
    ll pow = 1;
    while(exponent > 0) {
        if((exponent & 1) == 1) {
            pow *= n;
        }
        n *= n;
        
        // 桁をずらす
        exponent >>= 1;
    }
    return pow;
}

// n^(exponent) を mod で割った余りを計算 O(logN)
ll mod_pow(ll n, ll exponent, ll mod) {
    ll pow = 1;
    while(exponent > 0) {
        if((exponent & 1) == 1) {
            pow *= n;
            pow %= mod;
        }
        n *= n;
        n %= mod;
        
        // 桁をずらす
        exponent >>= 1;
    }
    return pow;
}

// n! を計算　O(N)
ll factorial(ll n) {
    ll factorial = 1;
    for(ll i = 1; i <= n; i++) {
        factorial *= i;
    }
    return factorial;
}

// n! を mod で割った余りを計算　O(N)
ll mod_factorial(ll n, ll mod) {
    ll factorial = 1;
    for(ll i = 1; i <= n; i++) {
        factorial *= i;
        factorial %= mod;
    }
    return factorial;
}

// xCn を計算
ll conbination(ll x, ll n) {
    return factorial(x) / (factorial(n) * factorial(x - n));
}

// xCn を　mod で割った余りを計算
ll mod_conbination(ll x, ll n, ll mod) {
    ll conb = mod_factorial(x, mod);
    
    // 逆元を求める(フェールマーの小定理を参照)
    ll reverse_n = mod_pow(mod_factorial(n, mod), mod - 2, mod);
    ll reverse_difference = mod_pow(mod_factorial(x - n, mod), mod - 2, mod);
    
    return (((conb * reverse_n) % mod) * reverse_difference) % mod;
}

int main() {
    ll n, k;
    cin >> n >> k;
    
    for(int i = 1; i <= k; i++) {
        if(i - 1 <= n - k) {
            cout << (mod_conbination(k - 1, i - 1, MOD) * mod_conbination(n - k + 1, i, MOD)) % MOD << endl;
        }
        else {
            cout << 0 << endl;
        }
    }
    
    return 0;
}