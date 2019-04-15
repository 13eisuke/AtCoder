#include <iostream>
#include <algorithm>
#include <math.h>
#include <string.h>
#include <vector>
typedef long long ll;
using namespace std;


int main() {
    char s[1000000];
    char a[26] = {0};
    scanf("%s", s);

    for (int i = 0; s[i] != '\0'; i++) a[s[i] - 'a']++;
    for (int i = 0; i < 26; i++) {
        if (a[i] == 0) {
            printf("%c\n", char(i + 'a'));
            return 0;
        }
    }
    cout << "None" << endl;
	return 0;
}