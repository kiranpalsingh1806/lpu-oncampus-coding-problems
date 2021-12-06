#include<bits/stdc++.h>
using namespace std;

int main() {
    int a;
    int *p;

    p = &a;
    a = 5;

    cout << "The value at p is " <<  p << "\n";
    cout << "The address of p is " << &p << "\n";
    cout << "The address at a is " <<  &a << "\n";
    cout << "The value pointed by p is " << *p << "\n";

   
    cout << "The value of a before updating is " << a << "\n"; 
    *p = 100;
    cout << "We updated the value pointed by p to 100" << "\n";

    cout << "The value of a after updating is " << a << "\n";
}