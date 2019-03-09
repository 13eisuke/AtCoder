#include <iostream>
#include <algorithm>
#include <math.h>
#include <string.h>
#include <vector>

typedef long long ll;
using namespace std;

int main()
{
    int H, W, h, w;

    cin >> H >> W;
    cin >> h >> w;

    cout << H*W - h*W - w*H + h*w << endl;


    
    return 0;
}
