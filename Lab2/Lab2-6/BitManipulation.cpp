#include <iostream>
#include <cmath>
#include <bits/stdc++.h>
using namespace std;

string getBinary(int n){
    string s = bitset<8>(n).to_string();

    return s;
} 

int getDec(string s){
    int n = 0;

    for(int i = 0; i < s.length(); i++){
        if(s[i] == '1'){
            n += pow(2,(s.length() - 1 -i));
        }
    }

    return n;
}

void getBit(int n, int index){
    string binary = getBinary(n);

    if(index >= binary.length()){
        cout << "Index out of range" << endl;
    } else {
        cout << binary[binary.length() - 1 - index] << endl;
    }
}

int setBit(int n, int index){
    string binary = getBinary(n);

    if(index >= binary.length()){
        cout << "Index out of range" << endl;
    } else {
        binary[binary.length() - 1 - index] = '1';
    }

    int num = getDec(binary);

    return num;
}

int clearBit(int n, int index){
    string binary = getBinary(n);

    if(index >= binary.length()){
        cout << "Index out of range" << endl;
    } else {
        binary[binary.length() - 1 - index] = '0';
    }

    int num = getDec(binary);

    return num;
}

int main(){
    int n;
    cout << "Enter a decimal number: ";
    cin >> n;

    int option = 0;
    int index = 0;

    while(option != -1){
        cout << "\nThe binary representation of " << n << " is: " << getBinary(n) << endl;
        cout << "Options:\n1. GetBit\n2. SetBit\n3. ClearBit\n-1. Exit\n";
        cin >> option;

        if(option == 1){
            cout << "\nEnter an index in the binary rep. to view: ";
            cin >> index;
            getBit(n, index);
        } else if(option == 2){
            cout << "\nEnter an index in the binary rep. to set: ";
            cin >> index;
            n = setBit(n, index);
        } else if(option == 3){
            cout << "\nEnter an index in the binary rep. to clear: ";
            cin >> index;
            n = clearBit(n, index);
        } else if(option == -1){
            cout << "\nExiting program...\n";
        } else {
            cout << "\nEntered an invalid option" << endl;
        }

    }

    return 0;
}