### Problem 1   
Given a singly linked list, we need to arrange the consonants and vowel nodes of it in such a way that all vowels nodes come from the consonants while maintaining the order of their arrival.

Test Case 1:  
Input : a->b->c->e->d->o->x->i
Output : a->e->o->i->b->c->d->x

```cpp

bool isVowel(char x) {
    return (x == 'a' || x == 'e' || x == 'i' || x == 'o' || x == 'u');
}

struct Node *sortByVowelAndConsonant(struct Node *head)
{
    struct Node *newHead = head;
    struct Node *latestVowel;
    struct Node *curr = head;

    if (head == NULL)
        return NULL;

    if (isVowel(head->data))
        latestVowel = head;
    else {
        while (curr->next != NULL &&
            !isVowel(curr->next->data))
            curr = curr->next;
  
        if (curr->next == NULL)
            return head;
  
        latestVowel = newHead = curr->next;
        curr->next = curr->next->next;
        latestVowel->next = head;
    }

    while (curr != NULL && curr->next != NULL)
    {
        if (isVowel(curr->next->data))
        {
            if (curr == latestVowel) {
                latestVowel = curr = curr->next;
            }
            else {
                struct Node *temp = latestVowel->next;
                latestVowel->next = curr->next;
                latestVowel = latestVowel->next;
                curr->next = curr->next->next;
                latestVowel->next = temp;
            }
        }
        else {
            curr = curr->next;
        }
    }
    return newHead;
}
```

### Problem 2
You are given a two dimensional integer matrix containing 1s and 0s. 1 repsents land and 0 represents water. An island is a group of 1s that are neighbouring whose perimeter is surrounded by water. Return the number of completely surrounded islands.

matrix = [
    [1, 1, 0, 0, 0],  
    [0, 0, 0, 0, 0],  
    [0, 1, 1, 1, 0],  
    [0, 1, 0, 1, 0],  
    [0, 1, 1, 1, 0],  
    [0, 0, 0, 0, 0]  
]    
   
Output : 1  

```cpp
void dfs(vector<vector<int> >& matrix,vector<vector<bool> >& visited, int x, int y,int n, int m) {
    
    if (x < 0 || y < 0 || x >= n || y >= m || visited[x][y] == true || matrix[x][y] == 0)
        return;

    visited[x][y] = true;
 
    dfs(matrix, visited, x + 1, y, n, m);
    dfs(matrix, visited, x, y + 1, n, m);
    dfs(matrix, visited, x - 1, y, n, m);
    dfs(matrix, visited, x, y - 1, n, m);
}

int countClosedIsland(vector<vector<int> >& matrix, int n, int m) {

    vector<vector<bool> > visited(n, vector<bool>(m, false));

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            if ((i * j == 0 || i == n - 1 || j == m - 1)
                and matrix[i][j] == 1
                and visited[i][j] == false)
                dfs(matrix, visited, i, j, n, m);
        }
    }

    int result = 0;
 
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            if (visited[i][j] == false && matrix[i][j] == 1) {
                result++;
                dfs(matrix, visited, i, j, n, m);
            }
        }
    }
    return result;
}
```

### Problem 3
You are given an integer array height of length n. Return the maximum amount of water a container can store.  
height = [8, 6, 2, 5, 4, 8]   
min(arr[0], arr[n - 1]) * arr[n];  
Output : 40
8->6 = 6
6->2 = 2
2->5 = 2
5 -4 = 4
4->8 = 4

Total 18 blocks


```cpp
int maximumWater(vector<int>& height) {
        int N = height.size();
        vector<int> left(N, 0);
        vector<int> right(N, 0);
        
        left[0] = height[0];
        right[N - 1] = height[N - 1];
        
        for(int i = 1; i < N; i++) {
            left[i]  = max(left[i - 1], height[i]);
        }
        
        for(int i = N - 2; i >= 0; i--) {
            right[i] = max(right[i + 1], height[i]);
        }
        
        int answer = 0;
        for(int i = 1; i < N - 1; i++) {
            answer += max(0, min(left[i], right[i]) - height[i]);
        }
        
        return answer;
    }
```

---
This file is created by [Kiranpal Singh](https://github.com/kiranpalsingh1806) <br>
For Data Structures and Algorithm snippets, [click here](https://github.com/kiranpalsingh1806/DSA-Code-Snippets) <br>
<p align="left"> <img src="https://komarev.com/ghpvc/?username=kiranpalsingh1806&label=Views&color=blue&style=plastic" alt="kiranpalsingh" /> </p>

---