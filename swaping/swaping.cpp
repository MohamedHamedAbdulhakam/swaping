#include <iostream>
using namespace std;

void swapByValue(int a, int b) {
    int temp = a;
    a = b;
    b = temp;
}

void swapByPointer(int* a, int* b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

void swapByReference(int& a, int& b) {
    int temp = a;
    a = b;
    b = temp;

}

int main() {
    int x = 10, y = 20;

    cout << "Original Values: x = " << x << ", y = " << y << endl;


    swapByValue(x, y);
    cout << "After swapByValue: x = " << x << ", y = " << y << endl;


    swapByPointer(&x, &y);
    cout << "After swapByPointer: x = " << x << ", y = " << y << endl;

    x = 10;
    y = 20;


    swapByReference(x, y);
    cout << "After swapByReference: x = " << x << ", y = " << y << endl; // x and y are swapped

    return 0;
}
