### Problem 1
Find the error in given code      

```cpp
#include <iostream>
using namespace std;

int main() 
{
    int var;
    void *ptr = &var; // Original Question - Compilation error
    
    *ptr = 5;
    
    printf("var = %d and *ptr = %d", var, *ptr);
    return 0;

    // Solution

    int *ptr = &var; // Solution to Compilation Error
}
```

### Problem 2
Infinite Recusion 
You are given a function which takes two parameters, one is list and other is integer. We have to find the output of this function out of given options
1). No Issues
2). Incorrect Conversion of x
3). Infinite Recusion
4). Original Value of x missed  

```java
import java.util.*;

public class Main {
  
    public static void func(List l, int x) {
      x = (int) x / 2;
      if(0 > x) {
        return;
      }
      
      l.add(x);
      func(l, x);
    }
  
    public static void main(String[] args) {
      List<Integer> list=new ArrayList<Integer>();
      list.add(1);
      list.add(2);
      list.add(3);
      func(list, 1);
  }

  // Solution
//   Option C
}
```

### Problem 3
Output of Problem

```js
var name = "ZopSmart";
name = name + 20;
console.log(name); // ZopSmart20
```

---
This file is created by [Kiranpal Singh](https://github.com/kiranpalsingh1806) <br>
For Data Structures and Algorithm snippets, [click here](https://github.com/kiranpalsingh1806/DSA-Code-Snippets) <br>
<p align="left"> <img src="https://komarev.com/ghpvc/?username=kiranpalsingh1806&label=Views&color=blue&style=plastic" alt="kiranpalsingh" /> </p>

---