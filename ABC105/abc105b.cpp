#include <iostream>
#include <algorithm>
#include <math.h>
#include <string.h>

typedef long long ll;
using namespace std;

int main()
{
    int n, c=0; 
    cin >> n;

    for(int i=0; i<=25; i++){
        for(int j=0; j<=14; j++){
            if(n == (4*i + 7*j))c++;
        }
    }


    if (c > 0)cout << "Yes" << endl;
    else cout << "No" << endl;
    return 0;
}