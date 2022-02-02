#include <iostream>
#include "Test.cpp"
using namespace std;

int main() {
    cout << greet("Stanley") << endl;
    Student *Stan_Stan = new Student("Stanley Yuan", 20, 1234567);

    cout << Stan_Stan->get_info() << endl;
    cout << Stan_Stan->get_SSN() << endl;

    // delete Stan_Stan;
}