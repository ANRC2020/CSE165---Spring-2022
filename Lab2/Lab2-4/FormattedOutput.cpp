#include <iostream>
#include <cmath>
using namespace std;

string getBinary(int n){
    int bound = 1;
    int i = 0;
    string ans = "";

    while(n > pow(2,i)){
        i++;
    }

    for(int j = i; j >= 0; j--){
        if(pow(2,j) <= n){
            ans = ans + "1";
            n -= pow(2,j);
        } else {
            ans = ans + "0";
        }
    }

    cout << ans << endl;

    return ans;
}

int main() {

    while(true){
        int num;
        cout << "Enter a positive integer or -1 to stop: ";
        cin >> num;

        if(num == -1){
            break;
        }

        cout << "Hexadecimal form of " << num << " is: " << hex << num << endl;
        cout << "Set to dec" << dec << 0 << endl; 
        string temp = getBinary(num);
        // cout << "Binary form of " << dec <<  num << " is: " << getBinary(num) << endl;
    }

    return 0;
}
