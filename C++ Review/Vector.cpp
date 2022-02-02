#include <iostream>
#include <vector>
using namespace std;

int main(){
    int n = 20;
    vector<int> list;
    list.push_back(0);
    cout << list[0] << " ";
    list.push_back(1);
    cout << list[1] << " ";
    for(int i = 2; i < n; i++){
        list.push_back(list[i - 2] + list[i - 1]);
        cout << list[i] << " ";
    }

    cout << "\n";
    list.clear();
}