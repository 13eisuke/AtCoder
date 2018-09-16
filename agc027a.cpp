#include <iostream>
#include <algorithm>
#include <math.h>
#include <string.h>

typedef long long ll;
using namespace std;

int main()
{
    int n,x, cnt=0;
    ll a[100];

    cin >> n >> x;

    for(int i=0; i<n; i++){
        cin >> a[i];
    }

    sort(a, a+n);

    for(int i=0; i<n; i++){
        x-=a[i];
        if(x<0)break;
        cnt++;
    }

    if(cnt==n && x!=0)cnt--;

    cout << cnt << endl;
    return 0;
}