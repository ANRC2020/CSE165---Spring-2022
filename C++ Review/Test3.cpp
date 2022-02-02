#include <iostream>
using namespace std;

int main(){
    int size;
    cin >> size;

    int* arr = new int[size];

    for(int i = 0; i < size; i++){
        arr[i] = i*i;
        cout << arr[i] << " ";
    }

    cout << "\n";

    string s = "";
    cin >> s;

    string subStr = "";

    for(int i = 1; i < s.size(); i++){
        subStr += s[i];
    }

    cout << subStr;

    int x = 8 >> 5;

    cout << x << endl;

    
}