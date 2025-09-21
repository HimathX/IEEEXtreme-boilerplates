#include <iostream>
#include <string>
#include <limits>
#include <vector>
#include <sstream>
#include <algorithm> 
#include <cctype>  
using namespace std;

string shifter(string s, int shiftVal) {
    bool decrypt = false;
    vector<string> words;
    stringstream ss(s);
    string word;
    while (ss >> word) {
        words.push_back(word);
    }

    if (find(words.begin(), words.end(), "the") != words.end()) {
        decrypt = true;
    }

    if (decrypt) {
        shiftVal = (26 - shiftVal) % 26;
    }
    for (char &c : s) {
        if (c == ' ') {
            continue;
        }
        c = char((c - 'a' + shiftVal) % 26 + 'a');
    }
    return s;
}

int main() {
    int N;
    cin >> N;

    for(int i = 0; i < N; i++) {
        int shiftVal;
        cin >> shiftVal;

        string s;
        getline(cin >> ws, s);
        s = shifter(s, shiftVal);
        cout << s << '\n';
    }
    return 0;
}
