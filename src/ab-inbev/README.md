### Problem 1
We are given an integer N and vector of strings of size N. We have to find the strength of each given word. If te given character is vowel, the it will contribute
2 to the strength of the word, else it will contribute only one to the stregth of word.
We have to return the vector of strength of all words in incresing order. The answer must be precise upto two decimal places.

Sample Input
3
abc defg opq

Sample Output
1.25 1.33 1.33 

```cpp
#include <bits/stdc++.h>
using namespace std;

bool isVowel(char c) {
  if(c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') {
    return true;
  }
  return false;
}

int main() 
{
    int N;
    cin >> N;
    string S[N];
    
    vector<float> strength(N);
    
    for(int i = 0; i < N; i++) {
      cin >> S[i];
      double len = S[i].length();
      double strengthCnt = 0.0;
      for(int j = 0; j < len; j++) {
        if(isVowel(S[i][j])) {
          strengthCnt += 2;
        } else {
          strengthCnt += 1;
        }
      }
      
      strength[i] = (double)((strengthCnt * 1.0) / (len * 1.0));
    }
     
     sort(strength.begin(), strength.end());
    
    cout << setprecision(3);
    for(int i = 0; i < N; i++) {
      cout << strength[i] << " ";
    }
    return 0;
}
```