### Problem 1
We are given a matrix and interger L and R. We have to find the number of rows and columns in the matrix such that their sum is greater than or equal to L and less than or equal to R.

```cpp
vector<int> solve(int N, int M, vector<vector<int>>& A, int Q, int S, vector<vector<long long>>& Queries) {
	vector<long long> sum;
	vector<int> ans;

	for(int i = 0; i < N; i++) {
		int current = 0;
		for(int j = 0; j < M; j++) {
			current += A[i][j];
		}
		sum.push_back(current);
	}

	for(int i = 0; i < M; i++) {
		int current = 0;
		for(int j = 0; j < N; j++) {
			current += A[j][i];
		}
		sum.push_back(current);
	}

	for(auto Q : Queries) {
		long long L = Q[0];
		long long R = Q[1];

		int finalCnt = 0;

		for(auto a : sum) {
			if(a >= L && a <= R) {
				finalCnt++;
			}
		}
		ans.push_back(finalCnt);
	}

	return ans;
}
```

### Problem 2
A six faced ide is rolled n times. The numbers present on the faces are 1, 2, 3, 4, 5 and 6. Output of rolls is written in order to form a n-length string. Find the probablity for this string to be palindrome.

Example:
Consider n = 3, so there are 216 possibilities of combinations and there are exactly 36 of them which are palindromic combinations. So probablity is 36 / 216 = 1 / 6.

The only line of output should consist of a single integer PQ^-1(mod 10e9 + 7) if required probablity is of the form P / Q.