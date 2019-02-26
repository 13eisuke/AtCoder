#include <iostream>
#include <algorithm>
#include <math.h>
#include <string.h>
#include <vector>

typedef long long ll;
using namespace std;


int main()
{
    int n, max = 0, idx, sum = 0;
    cin >> n;

    vector <int> l(n, 0);

    for (int i = 0; i < n; i++) {
        cin >> l[i];
        if (max < l[i]){
            max = l[i];
            idx = i;
        }
    }

    for (int i = 0; i < n; i++) {
        if (i != idx) sum += l[i];
    }

    if(sum > l[idx]) cout << "Yes" << endl;
    else cout << "No" << endl;

    return 0;
}