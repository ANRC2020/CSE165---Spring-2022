#include <iostream>
using namespace std;

string greet(string name) {
    string ans = "Hello " + name + "!";
    return ans;
}

class Student {
    private:
        string SSN = "311 89 1021";
        string full_name = "";
        int age = -1;
        int id = -1;

    public:
        string get_info(){
            string ans = full_name + " " + to_string(age) + " " + to_string(id);
            return ans;
        }

        Student(string name_, int age_, int id_){
            full_name = name_;
            age = age_;
            id = id_;
        }

        string get_SSN(){
            return SSN;
        }

};

// int main() {
//     cout << greet("Stanley") << endl;
//     Student Stan_Stan("Stanley Yuan", 20, 1234567);

//     cout << Stan_Stan.get_info() << endl;
//     cout << Stan_Stan.get_SSN() << endl;
// }
