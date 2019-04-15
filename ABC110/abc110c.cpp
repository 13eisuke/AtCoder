#include <iostream>
#include <algorithm>
#include <math.h>
#include <string.h>

typedef long long ll;
using namespace std;

int main()
{
    string S, T;
    int s[26]={0}, t[26]={0};
    cin >> S >> T;

    for(int i=0; i<S.length(); i++){
        s[S[i]-'a']++;
        t[T[i]-'a']++;
    }
    sort(s, s+26);
    sort(t, t+26);

    for(int i=0; i<26; i++){
        if(s[i] != t[i]){
            cout << "No" << endl;
            return 0;
        }
    }

    cout << "Yes" << endl;

    return 0;
}