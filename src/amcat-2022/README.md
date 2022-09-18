### Problem 1
There are n people living in state. In this state, people concatenate their town name before their first name. Write an algorithm to find the name of the town of the given N people where the name of twon is the common substring and has the maximum length.

```cpp
#include <bits/stdc++.h>
using namespace std;

string getTown(vector<string>& peopleNames) {
  string answer;
  
  int n = peopleNames.size();
  
  if (n == 0)
      return "";

  if (n == 1) return peopleNames[0];

  sort(peopleNames.begin(), peopleNames.end());

  int en = min(peopleNames[0].size(), peopleNames[n - 1].size());

  string first = peopleNames[0], last = peopleNames[n - 1];
  int i = 0;
  while (i < en && first[i] == last[i])
      i++;

  string pre = first.substr(0, i);
  return pre;
}

int main() 
{
    int n;
    string str;
    cin >> n;
    vector<string> A(n);
    
    for(int i = 0; i < n; i++) {
      cin >> str;
      str[0] = tolower(str[0]);
      A[i] = str;
    }
    
    cout << getTown(A) << "\n";
}
```

Sample Test Case:
5
Rosewood rose rosy rosemarry roshh

Output:
ros

### Problem 2
Given an array of n integers and print the number of elements in array which are perfect squares.

```cpp
#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int N;
    cin >> N;
    vector<int> A(N);
    
    for(int i = 0; i < N; i++) {
      cin >> A[i];
    }
    
    int cnt = 0;
    
    for(auto n : A) {
      int temp = sqrt(n);
      if(temp * temp == n) {
        cnt++;
      }
    }
    
    cout << cnt << "\n";
}
```

Sample Test Case:
6
25 77 54 81 48 34

Output:
2
