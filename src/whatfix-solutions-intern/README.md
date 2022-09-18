### Problem 1
We are given a string and we have to find the shortest subsequence. If there are multiple subsequences of same length, then return the lexicographically minimal one.
```cpp
#include<bits.stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;
    int N = s.length();
    char min = 'z';
    for(int i = 0; i < N; i++) {
        if(s[i] < min) {
            min = s[i];
        }
    }

    cout << min << "\n";
}
```

### Problem 2
There are n shops in a row. You have a number of coins to spend while
shopping. These coins are denoted by c1,c2,…cn where Ci is the number of
coins that you have to spend when you shop at the ith shop.

You start shopping from the very first shop and move towards the nth shop sequentially
For every shop that you skip, you have to buy one candy. Each candy costs x coins. You cannot skip more than three shops in a row. Also you cannot skip first and last shop.

Your task is to determine the minimum number of coins that you have spent after shopping
from the nth shop.

```cpp
long long solve(int x, vector c, int n) {
    long long dp[n-1][4];
    for(int i=0;i<n-1;i++) {
        for(int j=0;j<4;j++) {
            dp[i][j] = 1e12;   
        }
        
    }

    dp[0][0] = c[0];

    for(int i=1;i<n-1;i++){
        dp[i][0] = min({dp[i-1][0],dp[i-1][1],dp[i-1][2],dp[i-1][3]})+c[i];
        dp[i][1] = dp[i-1][0]+x;
        dp[i][2] = dp[i-1][1]+x;
        dp[i][3] = dp[i-1][2]+x;
    }

    return min({dp[n-2][0],dp[n-2][1],dp[n-2][2],dp[n-2][3]}) + c[n-1];
}
```