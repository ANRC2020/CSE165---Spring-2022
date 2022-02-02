#include <iostream>
#include <fstream>
#include <ostream>
using namespace std;

int main(){
    ifstream in;
    in.open("Input.txt");
    ofstream out;
    out.open("Output.txt");

    string line;
    while(getline(in, line)) {
        out << line << endl;
    }   

}