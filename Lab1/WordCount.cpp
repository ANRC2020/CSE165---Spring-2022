#include <iostream>
#include <fstream>
#include <string>
#include <vector>
using namespace std;

int main() {
    string file = "words.txt";
    ifstream in;
    in.open(file);

    string line;
    int count = 0;

    vector<string> s;
    string temp = "";

    while (in >> line) {
        s.push_back(line);
        count += 1;
    }

    cout << "The file " << file << " has " << count << " word\n";
}