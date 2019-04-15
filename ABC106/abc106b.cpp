#include <iostream>
#include <algorithm>
#include <math.h>
#include <string.h>

typedef long long ll;
using namespace std;

int main()
{
    int n, c=0, k=0;
    cin >> n;

    for(int i=1; i<=n; i=i+2){
        c=0;
        for(int j=1; j<=i; j++){
            if(i%j == 0)c++;
        }
        if(c==8)k++;
    }

    cout << k << endl;
    return 0;
}