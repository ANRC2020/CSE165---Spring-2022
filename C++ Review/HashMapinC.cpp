#include<iostream>
#include <map>
#include <cstring>
using namespace std;

map<char, char> my_map = {
    { 'A', '1' },
    { 'B', '2' },
    { 'C', '3' }
};

int main(){
    cout << my_map;
}