# Company Name

## 1. Count All Delivery and Pickup Points

Given n orders, each order consist in pickup and delivery services.     
Count all valid pickup/delivery possible sequences such that delivery(i) is always after of pickup(i).    
Since the answer may be too large, return it modulo 10^9 + 7.

```cpp
#include <iostream>
using namespace std;

int countOrders(int n) {
    long long ans = 1;
    long long mod = 1e9 + 7;
    
    for(int i = 2; i <= n; i++) {
        long long prev = ans;
        long long cnt = 2 * i - 1;
        ans = (cnt * (cnt + 1) / 2) % mod;
        ans = (ans * prev) % mod;
    }
    
    return ans;
}

int main() 
{
    int ans = countOrders(3);
    cout << "ans : " << ans << "\n";
    return 0;
}
```

## 2. Number of Platforms

We are given arrival and departure time of N trains. We have to just count the number of maximum trains present at one particular time interval. That number of trains will be equal to the number of platforms required. 

```cpp
#include <bits/stdc++.h>
using namespace std;

// Line Sweep, Difference Array
int line[2401];

int main() 
{
    memset(line, 0, sizeof(line));
    // vector<int> arrival = {900, 920, 950, 1000, 1100, 1800};
    // vector<int> departure = {930, 1200, 1120, 1130, 1900, 2000};
    vector<int> arrival = {2200, 2300};
    vector<int> departure = {200, 300};
    int number_of_planes = 2;
    
    int maxEnd = 0;
    int minStart = 2400;
    
    for(int i = 0; i < number_of_planes; i++) {
      int start = arrival[i];
      int end = departure[i];
      
      line[start] += 1;
      line[end + 1] -= 1;
      
      minStart = min(minStart, start);
      maxEnd = max(maxEnd, end);
    }
    
    
    for(int i = 1; i <= 2400; i++) {
      line[i] += line[i - 1];
    }
    
    int no_of_runways = 1;
    
    for(int i = minStart; i <= maxEnd; i++) {
      no_of_runways = max(no_of_runways, line[i]);
    }
    
    cout << "no_of_runways : " << no_of_runways << "\n";
    
}
```

<details>
<summary>About Me</summary>

- Full Stack Web Developer
- Competitive Programmer

<p align="left"> <img src="https://komarev.com/ghpvc/?username=kiranpalsingh1806&label=Views&color=blue&style=plastic" alt="kiranpalsingh" /> </p>

</details>