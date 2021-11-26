#include<bits/stdc++.h>
using namespace std;

int main() {
    int n = 5;
    vector<int> v(n);

    for(int i = 0; i < n; i++) {
        cin >> v[i];
    }

    cout << "The vector is : " << "\n";
    for(int i = 0; i < n; i++) {
        cout << v[i] << " ";
    }
    cout << "\n";

    cout << "Enter three more elements of your choice" << "\n";

    for(int i = n; i < n + 3; i++) {
        cin >> v.at(i);
    }

    // Out of range Exception

    cout << "The vector becomes : " << "\n";

    for(int i = 0; i < n + 3; i++) {
        cout << v[i] << " ";
    }
    cout << "\n";
}