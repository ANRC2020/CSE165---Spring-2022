#include <iostream>
using namespace std;

int i = 0;

int diff(int n, int target){
    cout << "Entered diff with n = " << n << "  and target = " << target << endl; 

    if(n == target){
        cout << "n == target -> returned 0\n";
        return 0;
    }

    cout << "Recursing to diff with n + 1 = " << (n + 1) << " and target = " << target << endl;
    diff(n + 1, target);
    cout << "Returned from diff with n + 1 = " << (n + 1) << " and target = " << target << endl;
    i += 1;
    cout << "Incremented i up by 1" << endl;

    return i;
}

int main() {
    int n = 8, target = 10;
    int x = diff(n, target);
    cout << x << endl;
}