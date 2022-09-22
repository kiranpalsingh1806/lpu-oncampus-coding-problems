# Hughes

## LRU Cache

Design a data structure that follows the constraints of a Least Recently Used (LRU) cache.

Implement the LRUCache class:

`LRUCache(int capacity)` Initialize the LRU cache with positive size capacity.    

`int get(int key)` Return the value of the key if the key exists, otherwise return -1.    

`void put(int key, int value) `Update the value of the key if the key exists. Otherwise, add the key-value pair to the cache. If the number of keys exceeds the capacity from this operation, evict the least recently used key.    

The functions get and put must each run in O(1) average time complexity.    



```cpp
class LRUCache {
public:
    
    list<int> data;
    unordered_map<int, pair<list<int>::iterator, int>> m;
    int cap;
    
    LRUCache(int capacity) {
        cap = capacity;
    }
    
    void moveToFirst(int key){
        data.erase(m[key].first);
        data.push_front(key);
        m[key].first=data.begin();
    }
    
    int get(int key) {
        if (m.find(key) == m.end()) return -1;
        
        moveToFirst(key);
        return m[key].second;
    }
    
    void put(int key, int value) {
        if (m.find(key) != m.end()){
            m[key].second = value;
            moveToFirst(key);
        } else{
            data.push_front(key);
            m[key]={data.begin(), value};
            cap--;
        }
        
        if (cap < 0) {
            m.erase(data.back());
            data.pop_back();
            cap++;
        }
        
    }
};
```

<details>
<summary>About Me</summary>

- Full Stack Web Developer
- Competitive Programmer

<p align="left"> <img src="https://komarev.com/ghpvc/?username=kiranpalsingh1806&label=Views&color=blue&style=plastic" alt="kiranpalsingh" /> </p>

</details>