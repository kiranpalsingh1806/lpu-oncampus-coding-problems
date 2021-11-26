#include<bits/stdc++.h>
using namespace std;

int main() {
    int a = 10;

    cout << "The initial value of a is : " << a << "\n";

    int *aptr;
    aptr = &a;

    cout << "The address of variable a in memory is : " << &a << "\n";
    cout << "The value at address " << aptr << " is " << *aptr << "\n"; 

    cout << "We updated the value at address " << aptr << "\n";
    *aptr = 20;

    cout << "The updated value of a is : " << a << "\n";
}