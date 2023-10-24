#include <iostream>

using namespace std;

struct Date {
    int year;
    int month;
    int day;
};

struct Complex {
    Date date;
    string name;
};

int main() {
    Date d = {2023, 10, 22};
    Complex c1 = {2023, 10, 22, "Girish Gopaul"};
    Complex c2 = {{2023, 10, 22}, "Girish Gopaul"};
    cout << sizeof(Date) << endl;
    return 0;
}
