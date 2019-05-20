#include <iostream>
#include <algorithm>
#include <math.h>
#include <string.h>
#include <vector>

using namespace std;

typedef long long ll;
typedef pair<int, int> pii;


int n;
vector<pii> g[100000];
int col[100000];
 
void dfs(int v, int p)
{
	for(int i = 0; i < int(g[v].size()); i++) {
        if(g[v][i].first != p){
		    int c = (col[v]+g[v][i].second)%2;
		    col[g[v][i].first] = c;
		    dfs(g[v][i].first, v);
	    }
    }
}
 
int main()
{
	cin >> n;
 
	for (int i = 0; i < n-1; i++) {
		int u, v, w;
		cin >> u >> v >> w;
		u--; v--;
		g[u].push_back(make_pair(v, w));
		g[v].push_back(make_pair(u, w));
	}
    
	col[0] = 0;
	dfs(0, -1);
 
	for (int i = 0; i < n; i++){
		cout << col[i] << endl;
	}
 
	return 0;
}