#include <iostream>
#include <algorithm>
#include <math.h>
#include <string.h>
#include <vector>
typedef long long ll;
using namespace std;


int main() {
    int x, a, b;
    cin >> x >> a >> b;

    if (abs(x-a) < abs(x-b)) cout << "A" << endl;
    else cout << "B" << endl;
	return 0;
}