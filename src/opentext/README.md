### Problem 1
We are given an interger N and we have to find the minimum number greater than given number such that the digit sum of that number is two times that of original number.

```cpp
int digitSum(int x, int b = 10) {
		int res = 0;
		for(; x; x /= b) {
			res += x % b;
		}
		return res;
}

int solution(int N) {
   int givenSum = digitSum(N);
    
    int S = N + 1;
    
    while(true) {
      if(digitSum(S) == 2 * givenSum) {
        return S;
        break;
      }
      S++;
    }
}
```

### Problem 2
We are given a vector and we have to find if it is possible to divide the vector into pairs such that each pair consists of two elements and all the elements in each pair are equal.

```cpp
bool solution(vector<int>& A) {
  map<int, int> M;
  
  for(auto a : A) {
    M[a]++;
  }
  
  for(auto a : M) {
    if((a.second % 2) == 1) {
      return false;
    }
  }
  
  return true;
}

```