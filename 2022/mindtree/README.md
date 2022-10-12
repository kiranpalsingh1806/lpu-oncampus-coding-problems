# Mindtree

## Problem 1

Given an array of integers nums and an integer target, return indices of the two numbers such that they add up to target.    
You may assume that each input would have exactly one solution, and you may not use the same element twice.   
You can return the answer in any order.   

```cpp
vector<int> twoSum(vector<int>& nums, int target) {
    int N = nums.size();
    unordered_map<int, int> M;
    
    for(int i = 0; i < N; i++) {
        int required = target - nums[i];
        if(M.count(required)) {
            return {i, M[required]};
        }
            
        M[nums[i]] = i;
    }
    return {-1, -1};
}
```

<details>
<summary>About Me</summary>

- Full Stack Web Developer
- Competitive Programmer

<p align="left"> <img src="https://komarev.com/ghpvc/?username=kiranpalsingh1806&label=Views&color=blue&style=plastic" alt="kiranpalsingh" /> </p>

</details>