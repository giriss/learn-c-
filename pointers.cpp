#include <iostream>

using namespace std;

int main() {
    short *ptr, arr[] = {10, 20, 30, 40, 50};
    ptr = &arr[0]; // same as `ptr = arr`
    cout << ptr << ", "
         << arr << ", "
         << &arr[0] << endl;

    short *new_ptr = ptr + 2;
    cout << *new_ptr << ", "
         << new_ptr[0] << ", "
         << new_ptr[1] << ", "
         << new_ptr[2] << endl;

    new_ptr[1] = 45;
    cout << &ptr[4] - &ptr[0] << ", "
         << ptr[3] << endl;

    return 0;
}
