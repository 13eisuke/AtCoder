
typedef long long ll;
ll gcd(ll a, ll b)
{
    if (a < b) {
        a ^= b;
        b ^= a;
        a ^= b;
    }
    return b ? gcd(b, a % b) : a;
};

ll lcm(ll a, ll b)
{
    return a * b / gcd(a, b);
};