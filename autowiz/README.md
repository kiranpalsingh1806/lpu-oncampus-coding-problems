### Problem 1
Acceleration and Breakings   

The first line of input contains a single integer, N. denoting the total number of datapoints.Each of the next N lines contain 2 space separated intogers, A and B, where - A is the timestamp. -B is the speed of the vehicle at that timestamp.    

Output Format:    
The output should contains three lines with the following informations:
The first line must contain the total distance convered by the vehicle in km. (Rounded off upto 3 decimal places).    
The second line must contain a single integer denoting the total number of sudden accelerations.    The third line must contain a single integer denoting the total number of sudden brakings.     


**********************************************
Test Case 1   
**********************************************
Input:   
21   
1537617124 4    
1537617126 6    
1537617128 7    
1537617130 8    
1537617132 10    
1537617134 25    
1537617136 26    
1537617138 30    
1537617140 36    
1537617142 32    
1537617144 19    
1537617146 18    
1537617148 29    
1537617150 30 
1537617152 15    
1537617154 18 
1537617156 19    
1537617158 15    
1537617160 14    
1537617162 9   
1537617164 0   

Output:   
0.205   
**********************************************



```cpp

```

### Problem 2   
Word Frequency    
Write a program to find the frequency of each word from the given input and print them in descending order of frequency count.    

**********************************************
Test Case 1   
**********************************************
Input :   
aa aaa bb bbb zz p1 12 zzz p1 12 322 2323 aa pl aa aaa 12 12   

Output:   
12  4   
aa 3    
p1 3   
aaa 2   
bb 1   
bbb 1   
22 1   
777 1   
322 1   
2323 1   
**********************************************

```cpp
#include <bits/stdc++.h>
using namespace std;

struct comp {
    template <typename T>
  
    // Comparator function
    bool operator()(const T& l,
                    const T& r) const
    {
        if (l.second != r.second) {
            return l.second > r.second;
        }
        return l.first > r.first;
    }
};

int main() 
{
    int N;
    cin >> N;
    
    vector<string> V(N);
    
    map<string, int> M;
    
    for(int i = 0; i < N; i++) {
      cin >> V[i];
      M[V[i]]++;
    }
    
    
    set<pair<string, int>, comp> S(M.begin(),M.end());   
    for (auto& it : S) {
        cout << it.first << ' '
             << it.second << endl;
    }
    
    return 0;
}
```


---
This file is created by [Kiranpal Singh](https://github.com/kiranpalsingh1806) <br>
For Data Structures and Algorithm snippets, [click here](https://github.com/kiranpalsingh1806/DSA-Code-Snippets) <br>
<p align="left"> <img src="https://komarev.com/ghpvc/?username=kiranpalsingh1806&label=Views&color=blue&style=plastic" alt="kiranpalsingh" /> </p>

---
