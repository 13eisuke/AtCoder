#include <iostream>
#include <algorithm>
#include <math.h>
#include <string.h>
#include <vector>

typedef long long ll;
using namespace std;

class UnionFind{
    public: 
        vector <int> Parent;
        UnionFind(int N) {
            Parent = vector <int> (N, -1);
        }

        int find_root(int a) {
            if (Parent[a] < 0) return a;
            return find_root(Parent[a]);
        }

        int size(int a) {
            return -Parent[find_root(a)];
        }
        bool connect(int A, int B) {
            A = find_root(A);
            B = find_root(B);
            if (A == B) {
                return false;
            }

            if (size(A) < size(B)) swap(A, B);
    
            Parent[A] += Parent[B];
            Parent[B] = A;
		    return true;
	    }
};

int main()
{
    int N, M;
    cin >> N >> M;

    vector <int> A(M), B(M);
    for (int i = 0; i < M; i++) {
        cin >> A[i] >> B[i];
        A[i]--;
        B[i]--;
    }
    
    vector <ll> ans(M);
    ans[M - 1] = (ll)N * (N - 1) / 2;

    UnionFind Uni(N);

    for (int i = M - 1; i >= 1; i--) {
        ans[i - 1] = ans[i];

        if (Uni.find_root(A[i]) != Uni.find_root(B[i])) {
            ans[i - 1] -= (ll)Uni.size(A[i]) * Uni.size(B[i]);
            Uni.connect(A[i], B[i]);
        }
    }
    for (int i = 0; i < M; i++) {
        cout << ans[i] << endl;
    }

    return 0;
}