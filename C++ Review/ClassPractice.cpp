#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Criminal {
           
  public:        
    int count = 0;
    vector<string> crime;
    vector<string> description;

    Criminal() {
        count = 0;
    }

    void updateCount(int x){
        count += x;
    }
    
    void updateCrime(string x){
        crime.push_back(x);
    }

    void updateDescription(string x){
        description.push_back(x);
    }

    string getInfo(){
        string summary = "";

        for(int i = 0; i < crime.size(); i++){
            summary += crime[i] + " " + description[i] + " " + to_string(count);
        }        

        return summary;
    }

    // Only use for pointers
    // ~Criminal() {
    //     delete count;
    // }

};

int main() {
    Criminal Abbas;
    string victim = "Abbas";

    Abbas.crime.push_back(victim);
    Abbas.description.push_back("Lost money on a stock");
    Abbas.count += 1;

    string summary = Abbas.getInfo();
    cout << summary << endl;

    Criminal Achyuth;
    string victim2 = "Achyuth";

    Achyuth.crime.push_back("Being a college student");
    Achyuth.description.push_back("Life");
    Achyuth.count += 1;

    cout << Achyuth.getInfo() << endl;
}
