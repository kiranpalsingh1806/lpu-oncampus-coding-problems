# Trianz

## 1. Contains All Characters

We are given a string and we have to print "Yes" if string contains all lowercase and all uppercase alphabet of English language.

```cpp
#include <bits/stdc++.h>
using namespace std;


vector<string> containsAllCharacters(vector<string> given_strings) {
  
    int N = given_strings.size();
    vector<string> ans;
    
    for(int i = 0; i < N; i++) {
        set<int> S;
        for(char c : given_strings[i]) {
           if( (int)c >= 65 && (int)c <= 90 || (int)c >= 97 && (int)c <= 122 ) {
             S.insert(int(c));
           }
        }
        
        if(S.size() == 52) {
          ans.push_back("YES");
        } else {
          ans.push_back("NO");
        }
    }
    
    return ans; 
}

int main() 
{
    vector<string> A;
    A.push_back("AFAGABAGS");
    A.push_back("ABCDEFGHIJKLM-=o41NOPQRSTTTTUVWXYZZZZabcdefghijklmnopqrstuvwxyz");
    
    auto ans = containsAllCharacters(A);
    for(auto a : ans) {
      cout << a << "\n";
    }
    cout << "\n";
}
```

## 2. Type and Delete  

We are given two strings str1 and str2. Each "#" in strings represent backspace pressed on keyboard. We have to find if the result of both strings will be same.  

```cpp
#include <bits/stdc++.h>
using namespace std;

void TypeAndDelete(string str1, string str2) {
  
  stack<char> S1, S2;
  
  for(char c : str1) {
    if(c == '#' && S1.size()) {
      S1.pop();
    } else if (c != '#') {
      S1.push(c);
    }
  }
  
  for(char c : str2) {
    if(c == '#' && S2.size()) {
      S2.pop();
    } else if( c != '#') {
      S2.push(c);
    }
  }
  
  while(S1.size() && S2.size()) {
    if(S1.top() == S2.top()) {
      S1.pop();
      S2.pop();
    } else {
      cout << "Different" << "\n";
      goto end;
    }
  }
  
  if(S1.size() || S2.size()) {
    cout << "Different" << "\n";
  } else {
    cout << "Same" << "\n";
  }
  end:;
}

int main() 
{
    string s1 = "a##c";
    string s2 = "#a#c";
    
    TypeAndDelete(s1, s2);
}
```

## 3. Can Delete Substring

We are given a string and we have to find if we can delete any substring of this string and make it equal to "programming". We can either delete the prefix of stirng or suffix of string of middle part of string.

```cpp
#include <bits/stdc++.h>
using namespace std;

vector<string> canDeleteSubstring( vector<string> given_strings) {
  int N = given_strings.size();
  
  // Three Cases to check:
  // 1). At the beginning
  // 2). At the end 
  // 3). In the middle
  
  vector<string> ans;
  
  for(int i = 0; i < N; i++) {
    
    string s = given_strings[i];
    string target = "programming";
    
    string rTarget = s;
    reverse(rTarget.begin(), rTarget.end());
    
    string t = s;
    reverse(t.begin(), t.end());
    
    if(s.length() < 11) {
      ans.push_back("NO");
    } else if(s.substr(0, 11) == "programming") {
      ans.push_back("YES");
    } else if (t.substr(0, 11) == "gnimmargorp") {
      ans.push_back("YES");
    } else {
      for(int i = 0; i < s.length(); i++) {
        string s1 = s.substr(0, min(i, 11));
        string s2 = rTarget.substr(0, 11 - i);
        reverse(s2.begin(), s2.end());
        if(s1 + s2 == "programming") {
          ans.push_back("YES");
          goto nextIteration;
        }
      }
      ans.push_back("NO");
    }
    
    nextIteration:;
    
  }
  
  return ans;
}

int main() 
{
    vector<string> A = {"afdfa", "programmingafnlf", "fadlfprogramming", "prodgfalnfaramming"};
    auto res = canDeleteSubstring(A);
    for(auto a : res) {
      cout << a << "\n";
    }
    cout << "\n";
}
```

<details>
<summary>About Me</summary>

- Full Stack Web Developer
- Competitive Programmer

<p align="left"> <img src="https://komarev.com/ghpvc/?username=kiranpalsingh1806&label=Views&color=blue&style=plastic" alt="kiranpalsingh" /> </p>

</details>