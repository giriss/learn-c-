#include <iostream>

using namespace std;

int main() {
    int num;
    cout << "Input a number: ";
    cin >> num;
    switch (num) {
        case 0:
            cout << "zero" << endl;
            break;
        case 1:
            cout << "one" << endl;
            break;
        case 2:
        case 3:
        case 4:
        case 5:
            cout << "two to five" << endl;
            break;
        default:
            cout << "default" << endl;
    }
    return 0;
}
