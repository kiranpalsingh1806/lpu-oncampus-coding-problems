#include<bits/stdc++.h>
using namespace std;

int main() {
    int arr[] = {10, 20, 30, 40};

    int *ptr = arr;

    cout << "The address of arr variable is " << arr << "\n";

    for(int i = 0; i < 4; i++) {
        cout << *ptr << "\n";
        ptr++;
    }

    cout << "The value at address " << arr << " is " <<  *arr << "\n";
}