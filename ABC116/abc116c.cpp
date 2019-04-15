#include <iostream>
#include <algorithm>
#include <math.h>
#include <string.h>
#include <vector>

typedef long long ll;
using namespace std;

int main()
{
    int n, count = 0;
    cin >> n;

    vector <int> h(n, 0);
    for (int i = 0; i < n; i++) {
        cin >> h[i];
    }

    for (int i = 0; i < n; i++) {
        while (h[i] > 0) {
            count++;
            for (int j = i; j < n; j++) {
                if (h[j] > 0) h[j]--;
                else break;
            }
        }
    }

    cout << count << endl;

    return 0;
}
