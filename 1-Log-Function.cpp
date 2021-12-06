#include<bits/stdc++.h>
using namespace std;

int main() {
    double result, result10, result2, result1p;
    for(int param = 1; param <= 1000; param++) {
        result = log (param);
        result10 = log10(param);
        result2 = log2(param);
        cout << "log(" << param << ") = " << result << "\n";
        cout << "log2(" << param << ") = " << result2 << "\n";
        cout << "log10(" << param << ") = " << result10 << "\n";
        cout << "----------------" << "\n";
    }
    
}