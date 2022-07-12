### Problem 1
Base Conversion   

Bob just read about the base conversion. Alice was getting bored hence she came up with a plan. She gave Bob a string S containing 0 and 1 and asked Bob to convert this to a decimal number. Being good at base conversions, Bob did that instantaneously and went back to building stuff. Again Alice has nothing to do so she gave Bob the same string and asked him to convert it to decimal number but using some new rules. For all 0 < i < N , if S[i] is '1' meaning final number is multiple of i and if it is '0' it means final number won't be a multiple of i. Bob has to find smallest of such number. He needs your help.  

**********************************************
Test Case 1      
**********************************************
Input :    
5    
01    
10000    
10     
11001    
11    

Output :   
-1      
1    
1    
10    
2    
**********************************************


```cpp
#include <bits/stdc++.h>
using namespace std;

int gcd(int a, int b)
{
  if (b == 0)
    return a;
  return gcd(b, a % b);
}
 
// Function to return LCM of two numbers
int lcm(int a, int b)
{
    return (a / gcd(a, b)) * b;
}

int main() 
{
    int t;
    string s;
    cin >> t;
    
    while(t--) {
      
      int ans = 1;
      cin >> s;
      int len = s.length();
      
      if(s[0] == '0') {
        cout << "-1" << "\n";
      } else {
         for(int i = 0; i < len; i++) {
          if(s[i] == '1') {
            ans = lcm(ans, i + 1);
          }
        }
        
        cout << ans << "\n"; 
      }
    }
}
```

### Problem 2
Abhimanyu's Matrix Traversal      

We are given a matrix with rows R and column C. We have to traverse the matrix in spiral order and return the result.   

**********************************************
Test Case 1      
**********************************************
Input :    
2 2   
1 2   
1 2   

Output :    
1221    
**********************************************


```cpp
#include <bits/stdc++.h>
using namespace std;

vector<int> spiralOrder(vector<vector<int>>& matrix) {
    vector<vector<int> > dirs{{0, 1}, {1, 0}, {0, -1}, {-1, 0}};
    vector<int> res;
    int nr = matrix.size();     if (nr == 0) return res;
    int nc = matrix[0].size();  if (nc == 0) return res;
    
    vector<int> nSteps{nc, nr-1};
    
    int iDir = 0;   // index of direction.
    int ir = 0, ic = -1;    // initial position
    while (nSteps[iDir%2]) {
        for (int i = 0; i < nSteps[iDir%2]; ++i) {
            ir += dirs[iDir][0]; ic += dirs[iDir][1];
            res.push_back(matrix[ir][ic]);
        }
        nSteps[iDir%2]--;
        iDir = (iDir + 1) % 4;
    }
    return res;
}

int main() 
{
    int R, C;
    cin >> R >> C;
    
    vector<vector<int>> M(R, vector<int>(C));
    
    for(int i = 0; i < R; i++) {
      for(int j = 0; j < C; j++) {
        cin >> M[i][j];
      }
    }
    
    auto ans = spiralOrder(M);
    
    for(auto A : ans) {
      cout << A;
    }
}
```

### Problem 3     
Ronny and Chocolates   

Ronny loves chocolates. He has X chocolates with him and eats exactly one chocolate daily. He will be sad if he couldn't get any chocolate to eat on a particular day. His father promised him to give exactly one chocolate after every Y days. Find after how many days will Ronny be sad for the first time.   

**********************************************
Test Case 1    
**********************************************
Input :    
2    
2 4   
4 2     

Output :    
2   
7   
**********************************************

```cpp
#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int t, X, Y;
    cin >> t;
    
    while(t--) {
      cin >> X >> Y;
      
      int ans = X;
      
      if(X / Y > 1) {
        ans++;
      }
      
      ans += (X / Y);
      
      cout << ans << "\n";
    }
}
```


---
This file is created by [Kiranpal Singh](https://github.com/kiranpalsingh1806) <br>
For Data Structures and Algorithm snippets, [click here](https://github.com/kiranpalsingh1806/DSA-Code-Snippets) <br>
<p align="left"> <img src="https://komarev.com/ghpvc/?username=kiranpalsingh1806&label=Views&color=blue&style=plastic" alt="kiranpalsingh" /> </p>

---
