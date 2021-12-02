#include<bits/stdc++.h>
using namespace std;

class Employee {
    int id;
    int salary;
    public:
        void setID(void) {
            salary = 122;
            cout << "Enter the id of employee" << "\n";
            cin >> id;
        }

        void getID(void) {
            cout << "The id of this employee is " << id << "\n";
        }
};

int main() {
    Employee Harry, Rohan, Lovish, Shruti;
    // Harry.setID();
    // Harry.getID();

    Employee fb[4];
    
    for(int i = 0; i < 4; i++) {
        fb[i].setID();
        fb[i].getID();  
    }
    return 0;
}