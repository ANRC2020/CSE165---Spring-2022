#include <iostream>
using namespace std;

int main(){
    try{
        int x = 10;
        int y;
        cout << "Please enter something: ";
        cin >> y;
        cout << (x/y) << endl;
        // throw "Hit an error";

    } catch (string e){
        cout << e;
    }

    cout << "Reached the end\n";

}
