#include<bits/stdc++.h>
using namespace std;

int main() {
    int a;
    int *p;

    p = &a;
    a = 5;

    cout << p << "\n";
    cout << &p << "\n";
    cout << &a << "\n";
    cout << *p << "\n";

    *p = 100;

    cout << a << "\n";
}