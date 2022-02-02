#include <iostream>
using namespace std;

int main(){
    int x = 5, y = 10;
    int* ptr1;
    int* ptr2;

    ptr1 = &x;
    ptr2 = &y;

    cout << "x = " << x << " and y = " << y << endl << endl;

    cout << "Addition: (*ptr2 + *ptr1) =" << (*ptr2 + *ptr1) << endl;
    cout << "Subtraction: (*ptr2 - *ptr1) = " << (*ptr2 - *ptr1) << endl;
    cout << "Multiplication: (*ptr2 * *ptr1) = " << (*ptr2 * *ptr1) << endl;
    cout << "Division: (*ptr2 / *ptr1) = " << (*ptr2 / *ptr1) << endl;

    return 0;
}