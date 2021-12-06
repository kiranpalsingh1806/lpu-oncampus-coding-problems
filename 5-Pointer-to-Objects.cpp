#include<bits/stdc++.h>
using namespace std;

class Complex {
    int real, imaginary;
    public:
        void getData() {
            cout << "The real part is " << real << "\n";
            cout << "The imaginary part is " << imaginary << "\n";
        }

        void setData(int a, int b) {
            real = a;
            imaginary = b;
        }
};

int main() {
    Complex c1;

    Complex *ptr = &c1;

    // (*ptr).setData(1, 54);
    // (*ptr).getData();

    ptr->setData(1, 450);
    ptr->getData();

    return 0;
}