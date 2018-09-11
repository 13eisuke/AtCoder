#include <iostream>
#include <algorithm>
#include <math.h>
#include <string.h>

typedef long long ll;
using namespace std;

int main()
{
  int n, sum = 0;
  int a[100001]={0}, tmp, i;

  cin >> n;

  for( i=0; i<n; i++){
    cin >> tmp;
    if(tmp > n) sum++;
    else a[tmp]++;
  }

  for( i=1; i<=n; i++){
    if(a[i] >= i) sum += a[i] - i;
    else sum += a[i];
  }

  cout << sum << endl;

  return 0;
}

