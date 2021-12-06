#include<bits/stdc++.h>
using namespace std;

int main() {
    int a = 10;
    int *p;
    p = &a;

    cout << *p << "\n";

    int **q = &p;

    cout << *q << "\n";
    cout << **q << "\n";

    return 0;
}

