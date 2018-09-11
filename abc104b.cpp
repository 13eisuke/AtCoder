#include <iostream>
#include <algorithm>
#include <math.h>
#include <string.h>

typedef long long ll;
using namespace std;

int main()
{
    string s;
	cin >> s;
	int puni = 0, index = -1, n = s.size();
	for (int i = 2; i <= n - 2; i++)
	{
		if (s[i] == 'C')
		{
			puni++;
			index = i;
		}
	}
	bool f = true;
	for (int i = 1; i < n; i++)
	{
		if (i == index)
		{
			continue;
		}
		if (!('a' <= s[i] && s[i] <= 'z'))
		{
			f = false;
			break;
		}
	}
	cout << ((s[0] == 'A' && puni == 1 && f) ? "AC" : "WA") << endl;
    

    
    return 0;
}