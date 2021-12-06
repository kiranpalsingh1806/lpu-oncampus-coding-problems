#include<bits/stdc++.h>
using namespace std;

// Function Objects : 
// Function wrapped in a class so that it can be available like an object.

int main() {
    int arr[] = {11, 3, 40, 12, 540, 77};
    sort(arr, arr + 6, greater<int>());
    
    for(int i = 0; i < 6; i++) {
        cout << arr[i] << "\n";
    }
    return 0;
}