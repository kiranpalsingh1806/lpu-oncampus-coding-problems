#include<bits/stdc++.h>
using namespace std;

int main() {
    int total{};
    int num1{}, num2{}, num3{};
    const int count{3};

    cout << "Enter your marks for three subjects: " << "\n";
    cin >> num1 >> num2 >> num3;
    
    total = num1 + num2 + num3;

    double average{0.0};
    average = static_cast<double> (total) / count;

    cout << "The average marks are " << average << "\n"; 

    return 0;
}