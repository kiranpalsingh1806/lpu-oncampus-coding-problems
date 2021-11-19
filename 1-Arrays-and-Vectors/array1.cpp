#include <bits/stdc++.h>
using namespace std;

int main() {
    int movie_rating[3][4] 
    {
        {0, 1, 2, 3},
        {4, 5, 6, 7},
        {8, 9, 10, 11}
    };

    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 4; j++) {
            cout << movie_rating[i][j] << " ";
        }
        cout << "\n";
    }
}