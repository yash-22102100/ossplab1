#include <bits/stdc++.h>
using namespace std;

string to_lower(const string &str) {
    string lower_str = str;
    transform(lower_str.begin(), lower_str.end(), lower_str.begin(), ::tolower);
    return lower_str;
}

int main() {
    string paragraph;
    cout << "Enter a paragraph: ";
    getline(cin,paragraph);

    paragraph = to_lower(paragraph);

    map<string, int> word_count;
    stringstream ss(paragraph);
    string word;
    while (ss >> word) {
        word_count[word]++;
    }


    cout << "Word frequencies:" << endl;
    for (auto entry : word_count) {
        cout << entry.first << ": " << entry.second << endl;
    }

    return 0;
}
