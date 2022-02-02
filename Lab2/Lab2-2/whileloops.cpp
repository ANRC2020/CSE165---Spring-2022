#include <iostream>
#include <string>
using namespace std;

string getSign(int n){
    
    if(n < 0) {
        return " is negative ";
    } else if(n > 0) {
        return " is positive ";
    } else {
        return " is neither positive nor positive. ";
    }

}

string getModulo(int n){

    if(n % 2 == 0){
        return " is even.";
    } else {
        return " is odd.";
    }

}

int main(){
    
    while(true){
        int num;
        cout << "Please enter an integer: ";
        cin >> num;

        if(num == 0){
            break;
        }

        cout << num << getSign(num) << endl;
        cout << num << getModulo(num) << endl << endl; 
    }

    return 0;
}