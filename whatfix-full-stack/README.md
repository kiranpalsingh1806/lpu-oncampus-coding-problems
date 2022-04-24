### Problem 1
We are given a matrix and we have to print the spiral form of matrix in vector.

```cpp
vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int M = matrix.size();
        int N = matrix[0].size();
        
        vector<int> ans;
        
        for(int i = 0; ans.size() < M * N; i++) {
            for(int j = i; j < N - i; j++) {
                ans.push_back(matrix[i][j]);
            }
            
            for(int j = i + 1; j < M - i; j++) {
                ans.push_back(matrix[j][N - i - 1]);
            }
            
            for(int j = N - i - 2; M - i - 1 != i && j >= i; j--) {
                ans.push_back(matrix[M - i - 1][j]);
            }
            
            for(int j = M - i - 2; N - i - 1 != i && j > i; j--) {
                ans.push_back(matrix[j][i]);
            }
        }
        
        return ans;
    }
```

### Problem 2

```cpp
#include<bits/stdc++.h>
using namespace std;


int main() {
	int N, M;
	string P, Q, R;
	cin >> N >> M >> P >> Q >> R;

	map<char, int> bobFreq, benFreq, mikeFreq;

	int maxBob = 0, maxBen = 0, maxMike = 0;

	for(int i = 0; i < M; i++) {
		bobFreq[P[i]]++;
		maxBob = max(maxBob, bobFreq[P[i]]);
	}

	for(int i = 0; i < M; i++) {
		benFreq[Q[i]]++;
		maxBen = max(maxBen, benFreq[Q[i]]);
	}

	for(int i = 0; i < M; i++) {
		mikeFreq[R[i]]++;
		maxMike = max(maxMike, mikeFreq[R[i]]);
	}

	maxBob = min(M, N + maxBob);
	maxBen = min(M, N + maxBen);
	maxMike = min(M, N + maxMike);

	vector<pair<int, int>> answer = {
		{maxBob, 1},
		{maxBen, 2},
		{maxMike, 3}
	};

	sort(answer.rbegin(), answer.rend());

	if(maxBob == maxBen && maxBen == maxMike) {
		cout << "Draw" << "\n";
	} else if(answer[0].first != answer[1].first) {
		if(answer[0].second == 1) {
			cout << "Bob" << "\n";
		} else if(answer[0].second == 2) {
			cout << "Ben" << "\n";
		} else {
			cout << "Mike" << "\n";
		}
	} else {
		cout << "Draw" << "\n";
	}

	return 0;
}
```