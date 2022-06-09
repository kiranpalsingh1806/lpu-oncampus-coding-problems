### Problem 1
Two Sum
Given an array of integers nums and an integer target, return indices of the two numbers such that they add up to target.
You may assume that each input would have exactly one solution, and you may not use the same element twice.

Test Case 1      
Input: nums = [2,7,11,15], target = 9    
Output: [0,1]    

Test Case 2   
Input: nums = [3,2,4], target = 6     
Output: [1,2]        

```cpp
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        // Mapping of elements with their indexes
        unordered_map<int, int> M;
        int N = nums.size();
        for(int i = 0; i < N; i++) {
            int req = target - nums[i];
            if(M.count(req)) {
                return {i, M[req]};
            }
            M[nums[i]] = i;
        }
        
        return {};
    }
};
```

### Problem 2
Valid Parentheses
Given a string s containing just the characters '(', ')', '{', '}', '[' and ']', determine if the input string is valid.
An input string is valid if:
Open brackets must be closed by the same type of brackets.
Open brackets must be closed in the correct order.

Input: s = "()"   
Output: true       

Input: s = "()[]{}"      
Output: true      

```cpp
class Solution {
public:
    bool isValid(string s) {
        stack<char> S;
        int N = s.length();
        for(int i = 0; i < N; i++) {
            char c = s[i];
            if(c == '(' || c == '{' || c == '[') {
                S.push(c);
            } else {
                if(S.empty()) return false;
                if(c == ')' && S.top() != '(') return false;
                if(c == '}' && S.top() != '{') return false;
                if(c == ']' && S.top() != '[') return false;
                S.pop();
            }
        }
        
        return S.empty();
    }
};
```
---
This file is created by [Kiranpal Singh](https://github.com/kiranpalsingh1806) <br>
For Data Structures and Algorithm snippets, [click here](https://github.com/kiranpalsingh1806/DSA-Code-Snippets) <br>
<p align="left"> <img src="https://komarev.com/ghpvc/?username=kiranpalsingh1806&label=Views&color=blue&style=plastic" alt="kiranpalsingh" /> </p>

---