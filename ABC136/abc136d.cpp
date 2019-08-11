#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
ll MOD = 1000000007;

int main()
{
    string S;
    cin >> S;
    int j, k;
    vector <int> a(S.size(), 0);
    for (int i = 0; i < S.size(); i+=j+k) {
        j = 0;
        k = 0;
        for (j = 0; S[i+j] == 'R'; j++);
        for (k = 0; S[i+j+k] == 'L'; k++);

        //cout << j << " " << k << endl;
        if (j%2) {
            a[i+j-1] += (j-1)/2 + 1;
            a[i+j] += (j-1)/2;
        } else {
            a[i+j-1] += j/2;
            a[i+j] += j/2;
        }

        if (k%2) {
            a[i+j-1] += (k-1)/2;
            a[i+j] += (k-1)/2 + 1;
        } else {
            a[i+j-1] += k/2;
            a[i+j] += k/2;
        }
    }
    for (int i = 0; i < S.size()-1; i++) cout << a[i] << " ";
    cout << a[S.size()-1] << endl;
    return 0;
}
