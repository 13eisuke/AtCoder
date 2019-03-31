#include <iostream>
#include <algorithm>
#include <math.h>
#include <string.h>
#include <vector>

typedef long long ll;
using namespace std;

ll Mod = 1e9 + 7;
int main()
{
    int N;
    string ans = "";
    cin >> N;
    vector <int> a(N+1, 0);

    for (int i = 1; i <= N; i++) cin >> a[i];

    if (N % 2){
        for (int i = N; i >= 1; i-=2) {
            cout << a[i] << " ";
        }
        for (int i = 2; i <= N-1; i+=2){
            cout << a[i] << " ";
        }
        cout << endl;
    }
    else{
        for (int i = N; i >= 2; i-=2) {
            cout << a[i] << " ";
        }
        for (int i = 1; i <= N; i+=2) {
            cout << a[i] << " ";
        }
        cout << endl;
    }

    return 0;
}