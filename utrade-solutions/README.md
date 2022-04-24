### Problem 1

We are given an array and in one moves we can remove atmost two elements of the array. We can do this operation if and only if sum of elements we are removing is less than or equal to k. We have to find the minimum number of operations to remove all the elements of array.

```cpp
int solve(vector<int>& arr, int k) {
    sort(arr.begin(), arr.end());
    int N = arr.size();
    int i = 0;
    int j = N - 1;

    int moves = 0;

    while(i <= j) {
        if(arr[i] + arr[j] <= k) {
            moves++;
            i++;
            j--;
        } else {
            moves++;
            j--;
        }
    }

    return moves;
}
```

### Problem 2
We are given a string and we have to find if string str1 can be made from the subsequence of the string str2. If true, we have to return "Yes" else "No".

```cpp

string solve(string &str1, string &str2) {
    int target = str1.size();
    int index = 0;

    for(char c : str2) {
        if(c == str[index]) {
            index++;
        }
    }

    if(index == target) {
        return "Yes";
    } else {
        return "No";
    }
}
```