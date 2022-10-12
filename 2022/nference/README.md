# Nference

## Problem 1

We have to find the longest subarray such that the current element is less than or equal to the previous element. We have
to print the length of longest such subarray. We have to stop the process if we encounter any negative number.    


```cpp
#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int x, prev = -1, ans = 1, curr = 1;
    
    while (cin >> x) {
      
      // If we get negative number, break out of loop
      if (x < 0) {
        cout << ans << "\n";
        goto end;
      }
      
      if (x <= prev) {
        curr++;
        ans = max(ans, curr);
      } else {
        curr = 1;
      }
      
      prev = x;
    }
    
    cout << ans << "\n";
    end:;
    
    return 0;
}
```

<details>
<summary>About Me</summary>

- Full Stack Web Developer
- Competitive Programmer

<p align="left"> <img src="https://komarev.com/ghpvc/?username=kiranpalsingh1806&label=Views&color=blue&style=plastic" alt="kiranpalsingh" /> </p>

</details>