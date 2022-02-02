#include <iostream>
#include <string>
#include <vector>
#include <fstream>
#include <bits/stdc++.h>
using namespace std;

vector<string> s;
vector<int> c;

string filter(string text){
    string word = "";

    for(int i = 0; i < text.size(); i ++){
        if(text[i] >= 'a' and text[i] <= 'z'){
            word += text[i];
        }
    }

    return word;
}

int main(){
    string file = "words.txt", word, search;
    ifstream in;
    in.open(file);

    while(in >> word) {
        transform(word.begin(), word.end(), word.begin(), ::tolower);
        word = filter(word);

        int i = -1;

        for(int j = 0; j < s.size(); j++){
            if(s[j] == word){
                c[j] += 1;
                i = j;
                break;
            }
        }

        if(i == -1){
            s.push_back(word);
            c.push_back(1);
        }

    }

    cout << "Enter a word to look for: ";
    cin >> search;
    transform(search.begin(), search.end(), search.begin(), ::tolower);
    search = filter(search);
    int count = -1;

    for(int i = 0; i < s.size(); i++){
        if(s[i] == search){
            cout << c[i] << " instances of " << s[i] << endl;
            count = c[i];
        }
    }

    if(count == -1){
        cout << "No instances of " << search << endl;
    }

}