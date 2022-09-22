# Company Name

## 1. Design String 

We are given two integers n and m. We have to output a string of size n such that there are no same adjacent characters and we can use only m alphabets. Each alphabet must be lowercase.

```cpp
#include <bits/stdc++.h>
using namespace std;

char available(int m) {
  char c = 'a';
  for(int i = 0; i < 26; i++) {
    if(m == i) return c;
    c++;
  }
  return 'z';
}

int main() 
{
    int n, m;
    cin >> n >> m;
    
    string s;
    
    for(int i = 0; i < n; i++) {
      s.push_back(available(i % m));
    }
    
    cout << s << "\n";
}
```

## How many Marble Containers ?

Whenever marble container size goes strictly above b, change the container.     
Whenever the marble count in one container strictly goes above d, change the container.    

We are given n marbles and value of b and d respectively. We have to count the number of containers at the end of process.

```cpp
#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int n, b, d;
    cin >> n >> b >> d;
    vector<int> A(n);
    
    for(auto &n : A) {
      cin >> n;
    }
    
    int marbleCnt = 0, takeAnother = 0, marbleSize = 0;
    
    for(int i = 0; i < n; i++) {
      marbleCnt++;
      marbleSize += A[i];
      
      if(marbleSize > b) {
        marbleCnt = 0;
        marbleSize = 0;
        takeAnother++;
        i--;
      }
      
      if(marbleCnt > d) {
        marbleCnt = 0;
        marbleSize++;
        takeAnother++;
        i--;
      }
    }
    
    cout << takeAnother << "\n";
}
```

<details>
<summary>About Me</summary>

- Full Stack Web Developer
- Competitive Programmer

<p align="left"> <img src="https://komarev.com/ghpvc/?username=kiranpalsingh1806&label=Views&color=blue&style=plastic" alt="kiranpalsingh" /> </p>

</details>