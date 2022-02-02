#include <string> 
#include <iostream> 
#include <fstream> 
#include <vector>
using namespace std;

int main()
{
    cout << "Problem 5: \n";

    string s = "", r = "";
    vector<string> v;
    ifstream in("code.cpp");
    string line;
    while (getline(in, line)) {//getline returns true if read successfully
        v.push_back(line); // Add the line to the end of v // Add line numbers:
        s += line;
    }
    
    for(int i = 0; i < v.size(); i++){
        cout << (v.size() - i) << ": " <<  v[i] << endl;
    }

    for(int i = v.size() -1; i >= 0; i--){
        r += v[i];
    }

    cout << "\nProblem 6:\n\n" << "In order:\n\n " << s << "\nReversed:\n\n" << r << endl;
}