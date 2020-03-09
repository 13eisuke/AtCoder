#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1; } return 0; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1; } return 0; }

// 最大公約数
ll gcd(ll a, ll b)
{
    if (a < b) {
        a ^= b;
        b ^= a;
        a ^= b;
    }
    return b ? gcd(b, a % b) : a;
};

//　最小公倍数
ll lcm(ll a, ll b)
{
    return a * b / gcd(a, b);
};

// UnionFind
struct UnionFind 
{
    vector <int> d;
    UnionFind(int n): d(n, -1) {}
    int root(int x) {
        if (d[x] < 0) return x;
        return d[x] = root(d[x]);
    }
    
    bool unite(int x, int y) {
        x = root(x); y = root(y);
        if (x == y) return false;
        if (d[x] > d[y]) swap(x, y);
        d[x] += d[y];
        d[y] = x;
        return true;
    } 
    bool same(int x, int y) { return root(x) == root(y); }
    int size(int x) { return -d[root(x)]; }
};

// ワーシャルフロイド
// n頂点
void warshallfloyd(int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            for (int k = 0; k < n; k++) {
                //chmin(d[j][k], d[j][i] + d[i][k]);
            }
        }
    }
}
