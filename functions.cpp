#include <iostream>

using namespace std;

void sayHello(string name = "World");

void incrementByReference(int &val) {
    val += 1;
}

void incrementByPointer(int *ptr) {
    *ptr += 1;
}

int main() {
    sayHello();
    sayHello("Girish");

    int val = 0;
    incrementByReference(val);
    incrementByPointer(&val);

    cout << val << endl;

    return 0;
}

void sayHello(string name) {
    cout << "Hello " << name << "!" << endl;
}
