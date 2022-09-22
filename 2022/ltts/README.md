# LTTS

## Next Palindrome of Number

We are given an interger N and we have to return the next number whose digits form a palindrome.

```cpp
#include <bits/stdc++.h>
using namespace std;

bool isPalindrome(int n) {
  string s = to_string(n);
  string t = s;
  reverse(t.begin(), t.end());
  return t == s;
}

int getNextPalindrome(int N) {
  N++;
  while(true) {
    if(isPalindrome(N)) {
      return N;
    } else {
      N++;
    }
  }
}

int main() 
{
    int N = 121;
    int res = getNextPalindrome(N);
    cout << "res : " << res << "\n";
}
```

<details>
<summary>About Me</summary>

- Full Stack Web Developer
- Competitive Programmer

<p align="left"> <img src="https://komarev.com/ghpvc/?username=kiranpalsingh1806&label=Views&color=blue&style=plastic" alt="kiranpalsingh" /> </p>

</details>