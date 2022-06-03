### Problem 1
2D Squares
We are given an integer N and N points with coordinates X and Y. We have to find the four points which makes the square of largest length.
We have to print the bottom left coordinate of those square which has the largest length.

```cpp
#include<bits/stdc++.h>
using namespace std;

struct Point {
    int x, y;
};

int distSq(Point p, Point q)
{
    return (p.x - q.x) * (p.x - q.x) + (p.y - q.y) * (p.y - q.y);
}

bool isSquare(Point p1, Point p2, Point p3, Point p4)
{
    int d2 = distSq(p1, p2);
    int d3 = distSq(p1, p3); 
    int d4 = distSq(p1, p4); 
 
    if (d2 == 0 || d3 == 0 || d4 == 0)   
        return false;

    if (d2 == d3 && 2 * d2 == d4
        && 2 * distSq(p2, p4) == distSq(p2, p3)) {
        return true;
    }
 
    if (d3 == d4 && 2 * d3 == d2
        && 2 * distSq(p3, p2) == distSq(p3, p4)) {
        return true;
    }
    if (d2 == d4 && 2 * d2 == d3
        && 2 * distSq(p2, p3) == distSq(p2, p4)) {
        return true;
    }
 
    return false;
}

int main() {
  int N, X, Y;
  vector<Point> Points;
  cin >> N;
  
  for(int i = 0; i < N; i++) {
    cin >> X >> Y;
    Points.push_back({X, Y});
  }
  
  int maxLength = 0;
  pair<int, int> answer;
  
  for(int i = 0; i < N; i++) {
    for(int j = i + 1; j < N; j++) {
      for(int k = j + 1; k < N; k++) {
        for(int l = k + 1; l < N; l++) {
          
          if(isSquare(Points[i], Points[j], Points[k], Points[l])) {
            int length = abs(Points[i].x - Points[j].x);
            vector<pair<int, int>> pointsVec = {
              {Points[i].x, Points[i].y},
              {Points[j].x, Points[j].y},
              {Points[k].x, Points[k].y},
              {Points[l].x, Points[l].y} };
            sort(pointsVec.begin(), pointsVec.end());
            if(length > maxLength) {
              maxLength = length;
              // Find the bottom left coordinate
              answer = {pointsVec[0].first, pointsVec[0].second};
            }
          } else {
            // Keep moving forward
          }
        }
      }
    }
  }
  
  cout << answer.first << " " << answer.second << "\n";
}
```

### Problem 2
Last Digit Array
We are given an integer N and an array containing N integers. We will make new number by adding the last digit of all the number. We have to find if the resulting 
number is divible by 10 or not. We have to print "Yes" if it is divisible by 10.

```cpp
#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int N;
    cin >> N;
    vector<int> A(N);
    for(int i = 0; i < N; i++) {
      cin >> A[i];
    }
    
    if(A[N - 1] % 10 == 0) {
      cout << "Yes" << "\n";
    } else {
      cout << "No" << "\n";
    }
}
```
### Problem 3
Palindrome Checker
We are given a string and we have to check if it is palindrome or not.

```cpp
#include <bits/stdc++.h>
using namespace std;

bool isPalindrome(string s){
		if(s.size() == 0) return true;
		string t = s; reverse(t.begin(), t.end());
		return s == t;
	}

int main() 
{
    string S;
    cin >> S;
    if(isPalindrome(S)) {
      cout << "Yes" << "\n";
    } else {
      cout << "No" << "\n";
    }
}
```

### Problem 4
FB Picture Checker
We are given the length L of facebook post. It is the minimum length of square a post can has. W and H are width and height of user photo respectively. If the 
width or height of user photo is less than L, then print "UPLOAD ANOTHER". If the photo dimensions are fine and is square, then print "ACCEPTED" else print 
"CROP IT".

```cpp
#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int L, N, W, H;
    cin >> L>> N;
    
    for(int i = 0; i < N; i++) {
      cin >> W >> H;
      if(W < L || H < L) {
        cout << "UPLOAD ANOTHER" << "\n";
      } else if(W == H) {
        cout << "ACCEPTED" << "\n";
      } else {
        cout << "CROP IT" << "\n";
      }
    }
}
```
### Problem 5
Ordered Books
Alice is rearranging her library. She takes the innermost shelf and reverses the order of books. She breaks the walls of the shelf. In the end, there will be only books and no shelf walls. Print the order of books.

Opening and closing walls of shelves are shown by '/' and '\' respectively whereas books are represented by lower case alphabets.

Input format

The first line contains string  displaying her library.

Output format

Print only one string displaying Alice's library after rearrangement.

Sample Input
/u/love\i\
Sample Output
iloveu

```cpp
#include <bits/stdc++.h>
using namespace std;

int main() 
{
    string s;
    cin >> s;
    stack<char> st;
    string ans = "";
    for(int i=0; i<s.size(); i++){
        if(s[i] == '\\'){
            string temp = "";
            while(st.top() != '/'){
                temp += st.top();
                st.pop();
            }
            st.pop();
            if(st.empty()){
                ans = temp;
            }
            for(int j=0; j<temp.size(); j++){
                st.push(temp[j]);
            }
            continue;
        }
        st.push(s[i]);
    }
    cout << ans << "\n";
}
```