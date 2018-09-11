#include <iostream>
#include <algorithm>
#include <math.h>
#include <string.h>

typedef long long ll;
using namespace std;

int main()
{
    int r;
    cin >> r;

    if(r < 1200){
        cout << "ABC" << endl;
    } 
    else if (r < 2800){
        cout << "ARC" << endl;
    } 
    else cout << "AGC" << endl;
    
    return 0;
}
