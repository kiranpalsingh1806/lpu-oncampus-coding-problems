### Problems 1
Given an array of numbers, find the index of the smallest array element (the pivot), for which the sums of all elements to the left and to the right are equal. The array may not be reordered.

```cpp
#include <bits/stdc++.h>
using namespace std;


int main() {
    int n;
    cin >> n;
    vector<int> A(n);
    vector<int> prefix(n + 1);
    vector<int> suffix(n + 1);

    for(int i = 0; i < n; i++) {
        cin >> A[i];
        prefix[i + 1] = prefix[i] + A[i];
    }    

    for(int i = n - 1; i >= 0; i--) {
        suffix[i] = suffix[i + 1] + A[i];
    }

    for(int i = 1; i <= n; i++) {
        if(prefix[i] == suffix[i - 1]) {
            cout << i - 1 << "\n";
         }
    }
    return 0;
}
```

Sample Input 0    
4  
1 2 3 3

Sample Output 0   
2

### Problem 2 
An anagram is a word whose characters can be rearranged to create another word. Given two strings, determine the minimum number of characters in either string that must be modified to make the two strings anagrams . If it is not possible to make the two strings anagrams, return -1.

```cpp
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n;
    cin >> n;
    vector<string> a(n);
    for(int i = 0; i < n; i++) {
        cin >> a[i];
        sort(a[i].begin(), a[i].end());
    }
    cin >> n;
    vector<string> b(n);
    for(int i = 0; i < n; i++) {
        cin >> b[i];
        sort(b[i].begin(), b[i].end());
    }
    for(int i = 0; i < n; i++) {
        int cnt = 0;
        if(a[i].length() != b[i].length()) {
            cout << -1 << "\n";
        } else {
            for(char c = 'a'; c <= 'z'; c++) {
                int cnt1 = count(a[i].begin(), a[i].end(), c);
                int cnt2 = count(b[i].begin(), b[i].end(), c);
                cnt += abs(cnt1 - cnt2);
            }
            cout << (cnt + 1) / 2 << "\n";
        }
    }   
    return 0;
}
```

Sample Input 0  
5
a jk abb mn abc
5
bb kj bbc op def

Sample Output 0     
-1
0
1
2
3

Sample Input 1    
1
ab
1
bc

Sample Output 1      
1


Sample Input 2     
2
abc
aaa
2
bba
bbb

Sample Output 2      
1
3

### Problem 3 
A group of workers gathered to complete a task. Each worker has an efficiency rating. They will be grouped in pairs so an even number of workers are required. The cost of a pair is the absolute difference of the efficiencies assigned to the workers. The cost of the task is the sum of the costs of all pairs formed. There are an odd number of workers to choose from, so one worker will not be paired. Select the worker to exclude so the task's cost is minimized.

Given n workers and efficiency for each worker, find a configuration of the workers such that the cost of the task is the minimum possible. Return the minimum cost as the answer.

```cpp
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n;
    cin >> n;
    vector<int> a(n);

    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }

    sort(a.begin(), a.end());

    vector<int> diff(n);
    diff[0] = a[1] - a[0];
    diff[n - 1] = a[n - 1] - a[n - 2];
    int maxDiff = -1;
    int maxDiffIndex = -1;
    int ans = 0;

    for(int i = 1; i < n - 1; i++) {
        diff[i] = (a[i] - a[i - 1]) + (a[i + 1] - a[i]);
        if(diff[i] >= maxDiff) {
            maxDiff = max(maxDiff, diff[i]);
            maxDiffIndex = i;
        }
    }


    for(int i = 1; i < n; i++) {
        if(i + 1 == maxDiffIndex) {
            i++;
        }

        ans += abs(a[i] - a[i - 1]);
        i++;
    }

    cout << ans << "\n";
    return 0;
}

```

Sample Input 0        

5
4
1
2
16
8

Sample Output 0     
5

Explanation 0  

Exclude worker 4 and make the pairs (2, 3) and (1, 5). The cost of the task is |1 - 2| + |4 - 8| = 5.

Sample Input 1       

7
2
13
12
9
6
3
2

Sample Output 1    
4

Explanation 1      
Exclude worker 4 and make the pairs (1, 7), (2, 3), and (5, 6). The cost is |2 - 2| + |13 - 12| + |6 - 3| = 4.