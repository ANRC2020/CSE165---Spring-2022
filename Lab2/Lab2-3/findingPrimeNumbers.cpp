#include <iostream>
using namespace std;

int main(){
    int num;
    cout << "Please enter an integer limit: ";
    cin >> num;

    bool isPrime;

    cout << "Here are the prime numbers strictly less than " << num << ":\n";

    for(int i = 2; i < num; i++){
        isPrime = true;
        for(int j = 2; j < i; j++){
            if(i % j == 0 and j != i){
                isPrime = false;
                break;
            }
        }

        if(isPrime == true){
            cout << i << " ";
        }
    }

    return 0;
}