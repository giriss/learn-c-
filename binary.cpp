#include <iostream>

using namespace std;

int main() {
    cout << (int) (unsigned char) 0b00001000 << endl
         << (int) (unsigned char) 0b11110111 << endl
         << (int) (unsigned char) ~0b00001000 << endl;

    cout << 0b10010 << endl
         << (0b10010 << 2) << ' ' << 0b1001000 << endl
         << (0b10010 >> 2) << ' ' << 0b100 << endl;

    cout << 0b110 << endl
         << (0b110 << 1) << endl // multiply by 2
         << (0b110 >> 1) << endl; // divide by 2

    return 0;
}
