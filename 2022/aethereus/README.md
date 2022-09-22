### Problem 1
Deletion Distance    
The deletion distance between two strings is the minimum number of characters you need to delete in the two strings in order to have the same string. The deletion distance between "cat" and "at" is 1 because you can just delete the first character of cat.The deletion distance between "cat" and "bat" is 2 because you need to delete the first characters of both words. Of course, the deletion distance between two strings can't be greater than the sum of their lengths, because you can always just delete both of the strings entirely.

**********************************************
Test Case 1   
**********************************************
Input :   
cat at    

Output:  
1   
**********************************************

**********************************************
Test Case 2   
**********************************************
Input :   
cat bat   

Output:  
2  
**********************************************



```cpp
#include <bits/stdc++.h>
using namespace std;

int deletionDistance(string s1, string s2) {
  map<char, int> m1, m2;
  int answer = 0;
  
  for(auto c : s1) {
    m1[c]++;
  }
  
  for(auto c : s2) {
    m2[c]++;
  }
  
  for(char c = 'a'; c <= 'z'; c++) {
    answer += abs(m1[c] - m2[c]);
  }
  
  return answer;
}

int main() 
{
  string s1, s2;
  cin >> s1 >> s2;
  
  cout << deletionDistance(s1, s2) << "\n";
}
```

### Problem 2
There are a number of tiles on the floor, each numbered with a different non-negative interger. Treat this set of tiles as an array. You are initially standing on the first tile. Each tile in the set represents your maximum jumping distance at that position.   
For example : if you are standing on 3, you can jump to 3 tiles forward.
Find out if you can reach the last tile.

```cpp

```


---
This file is created by [Kiranpal Singh](https://github.com/kiranpalsingh1806) <br>
For Data Structures and Algorithm snippets, [click here](https://github.com/kiranpalsingh1806/DSA-Code-Snippets) <br>
<p align="left"> <img src="https://komarev.com/ghpvc/?username=kiranpalsingh1806&label=Views&color=blue&style=plastic" alt="kiranpalsingh" /> </p>
---
