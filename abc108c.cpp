#include <iostream>
#include <algorithm>
#include <math.h>
#include <string.h>

typedef long long ll;
using namespace std;

int main()
{
    ll N,K,P,Q=0;
    cin>>N>>K;
    P=N/K;
    if(K%2==0){
        Q=N/(K/2)-P;
    }
    cout<<P*P*P+Q*Q*Q<<endl;


    return 0;
}