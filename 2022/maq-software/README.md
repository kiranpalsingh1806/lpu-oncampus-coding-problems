### Problem 1
Given an integer array nums, move all 0's to the end of it while maintaining the relative order of the non-zero elements.

```cpp
void moveZeroes(vector<int>& nums) {
        int N = nums.size();
        int index = 0;
        
        for(int i = 0; i < N; i++) {
            if(nums[i] != 0) {
                nums[index++] = nums[i];
            }
        }
        
        for(int i = index; i < N; i++) {
            nums[i] = 0;
        }
    }
```