#include <iostream>
#include <algorithm>
#include <math.h>
#include <string.h>

typedef long long ll;
using namespace std;

int main()
{
    int n;
    string a[100];
    int tmp1, tmp2;

    cin >> n;

    for(int i=0; i<n; i++){
        cin >> a[i];
    }

    for(int i=0; i<n; i++){
        for(int j=i+1; j<n; j++){
            if(a[i] == a[j]){
                cout << "No" << endl;
                return 0;
                //cout << i << j << endl;
            }
        }
    }

    for(int i=0; i<n-1; i++){
        tmp1 = a[i].length();
        if(a[i][tmp1-1] != a[i+1][0]){
            cout << "No" << endl;
            //cout << i << endl;
            return 0;
        }
    }

    cout <<  "Yes"<< endl;
    return 0;
}