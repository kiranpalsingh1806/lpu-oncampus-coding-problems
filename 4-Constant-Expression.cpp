#include<bits/stdc++.h>
using namespace std;

// Using constexpr specifier, it is possible to evaluate the value
// of a function or varible at compile time

constexpr int add(int a, int b) {
    return a + b;
}

int main() {
    
    int a, b;
    a = 3;
    b = 5;
    cout << add(3, 5) << "\n";

    return 0;
}