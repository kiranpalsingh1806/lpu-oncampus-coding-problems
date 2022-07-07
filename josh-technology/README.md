### Problem 1
Minimum Sequence     

Given a pattern containing only I’s and D’s. I for increasing and D for decreasing. Device an algorithm to print the minimum number following that pattern. Digits from 1-9 and digits can’t repeat.       


**********************************************
Test Case 1   
**********************************************
Input:   
I    
Output:   
12   
**********************************************

**********************************************
Test Case 2   
**********************************************
Input:   
DD    

Output:   
321 
**********************************************

**********************************************
Test Case 3  
**********************************************
Input:   
IIDDD    

Output:    
126543
**********************************************

**********************************************
Test Case 4      
**********************************************
Input:   
DDIDDIID    

Output:    
321654798   
**********************************************

```cpp
void PrintMinNumberForPattern(string arr)
{
    int curr_max = 0, last_entry = 0, j;

    for (int i=0; i<arr.length(); i++) {
        int noOfNextD = 0;

        switch(arr[i]) {
        case 'I':
            j = i+1;
            while (arr[j] == 'D' && j < arr.length()) {
                noOfNextD++;
                j++;
            }
               
            if (i==0) {
                curr_max = noOfNextD + 2;
                cout << " " << ++last_entry;
                cout << " " << curr_max;
                last_entry = curr_max;
            } else
            {
                curr_max = curr_max + noOfNextD + 1;
                last_entry = curr_max;
                cout << " " << last_entry;
            }
            for (int k=0; k<noOfNextD; k++) {
                cout << " " << --last_entry;
                i++;
            }
            break;

        case 'D':
            if (i == 0) {
                j = i+1;
                while (arr[j] == 'D' && j < arr.length())
                {
                    noOfNextD++;
                    j++;
                }
                curr_max = noOfNextD + 2;
                cout << " " << curr_max << " " << curr_max - 1;
                last_entry = curr_max - 1;
            } else {
                cout << " " << last_entry - 1;
                last_entry--;
            }
            break;
        }
    }
    cout << endl;
}
```

### Problem 2   
Maximum Profit   
You are given an array of prices where each element of the array represents the prices of stocks as they were yesterday and indices of array represents minutes. Your task is to find and return the maximum profit you can make by buying and selling the stock. You can buy and sell stock only once.   

**********************************************
Test Case 1   
**********************************************
Input :   
2 100 150 120  

Output:   
148   
**********************************************

```cpp
int maximumProfit(vector<int>& prices, int N) {
    int profit = 0;
    int cp = prices[0];
    for(int i=1;i<prices.size();i++){
        profit = max(profit , prices[i] - cp);
        cp = min(cp ,prices[i]);
    }
    return profit;
}
```


---
This file is created by [Kiranpal Singh](https://github.com/kiranpalsingh1806) <br>
For Data Structures and Algorithm snippets, [click here](https://github.com/kiranpalsingh1806/DSA-Code-Snippets) <br>
<p align="left"> <img src="https://komarev.com/ghpvc/?username=kiranpalsingh1806&label=Views&color=blue&style=plastic" alt="kiranpalsingh" /> </p>

---
