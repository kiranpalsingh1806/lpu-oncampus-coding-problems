### Problem 1
Two Sum        

Given an array of integers nums and an integer target, return indices of the two numbers such that they add up to target.
You may assume that each input would have exactly one solution, and you may not use the same element twice.   
You can return the answer in any order.    


**********************************************
Test Case 1      
**********************************************
Input: nums = [2,7,11,15]    
target = 9     
Output: [0,1]    
**********************************************


```cpp
// The basic idea is to maintain a hash table for each element num in nums, using num as key and its index (0-based) as value. For each num, search for target - num in the hash table. If it is found and is not the same element as num, then we are done.

// The code is as follows. Note that each time before we add num to mp, we search for target - num first and so we will not hit the same element.

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> indices;
        for (int i = 0; i < nums.size(); i++) {
            if (indices.find(target - nums[i]) != indices.end()) {
                return {indices[target - nums[i]], i};
            }
            indices[nums[i]] = i;
        }
        return {};
    }
};
```

### Problem 2   
Longest Consecutive Sequence     
Given an unsorted array of integers nums, return the length of the longest consecutive elements sequence.

You must write an algorithm that runs in O(n) time.


**********************************************
Test Case 1    
**********************************************
Input: nums = [100,4,200,1,3,2]     
Output: 4     
**********************************************

```cpp
class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        
        //edge case-> if array is empty
        if(nums.size()==0)
            return 0;
        
        int res=0;
        
        unordered_map<int,pair<int,bool>> hash;
        
        for(auto i:nums){
            
            if(hash[i].first == 0){
                
                //count of frequency
                hash[i].first++;
                
                //check is the value already visited basically it is for repeated values
                hash[i].second=false;
            }
            
            //for repeated values
            else
                hash[i].first++;
        }
        
        for(auto i:nums){
            
            //if value is not visited and finding the consecutively maximum value
            //if we are not finding consecutively maximum value then this solution gives TLE
            if(hash[i].second==false && hash[i+1].first==0){
                
                // make it visited
                hash[i].second=true;
                
                //variable for checking length
                int count=0;
                
                //traversing all the values which are consecutively smaller then the current value
                // and checking it its frequency is not zero
                while(hash[i].first){
                    count++; //increase the length by one
                    i=i-1;   //decrease the value by one so that we can now find consecutive smaller values
                }
                res=max(res,count); //storing maximum length
            }
        }
        return res;
    }
};
```


---
This file is created by [Kiranpal Singh](https://github.com/kiranpalsingh1806) <br>
For Data Structures and Algorithm snippets, [click here](https://github.com/kiranpalsingh1806/DSA-Code-Snippets) <br>
<p align="left"> <img src="https://komarev.com/ghpvc/?username=kiranpalsingh1806&label=Views&color=blue&style=plastic" alt="kiranpalsingh" /> </p>

---
