### Problem 1

Largest Prime Factor    
You are given an integer num and you have to find the largest prime factor of that number.

```cpp
#include <bits/stdc++.h>
using namespace std;

bool is_Prime(int x) {
  if (x <= 1)
    return false;
  for(int i = 2; i <= x / 2; i++) {
      if(x % i == 0) {
         return false;
      }
   }
  return true;
}


int main() {
   int number;
   cin >> number;
   vector<int>Factors;
   for(int i = 2; i <= number/2; i++)
   {
      if(number % i == 0)
      {
         if(is_Prime(i)==true) {
            Factors.push_back(i);
         }
      }
   }
   int max=1;

   for(int i = 0; i < Factors.size(); i++)
   {
      if(Factors[i] > max)
      {
         max = Factors[i];
      }
   }

   cout<<"Largest prime factor = " << max <<endl;
   return 0;
}
```

### Problem 2
All Permutations of a Given String       
We are given a string and we have to print all the given permutation of given string.      
A permutation also called an “arrangement number” or “order,” is a rearrangement of the elements of an ordered list S into a one-to-one correspondence with S itself. A string of length n has n! permutation.  

```cpp
#include <bits/stdc++.h>
#include <string>
using namespace std;
  
void permute(string s , string answer)
{
    if(s.length() == 0) {
        cout << answer << "  ";
        return;
    }

    for(int i=0 ; i<s.length() ; i++) {
        char ch = s[i];
        string left_substr = s.substr(0,i);
        string right_substr = s.substr(i+1);
        string rest = left_substr + right_substr;
        permute(rest , answer+ch);
    }
  
}
  
int main() {
    string s, answer="";
    cin >> s;
    permute(s , answer);
    return 0;
}
```

---
This file is created by [Kiranpal Singh](https://github.com/kiranpalsingh1806) <br>
For Data Structures and Algorithm snippets, [click here](https://github.com/kiranpalsingh1806/DSA-Code-Snippets) <br>
<p align="left"> <img src="https://komarev.com/ghpvc/?username=kiranpalsingh1806&label=Views&color=blue&style=plastic" alt="kiranpalsingh" /> </p>

---