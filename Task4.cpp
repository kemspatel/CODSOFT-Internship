#include <iostream>
#include <fstream>
#include <string>
#include <sstream>

using namespace std;

int countWordsInFile(const string& filename) {
    ifstream file(filename);
    if (!file.is_open()) {
        cerr << "Error: Unable to open file " << filename << endl;
        return -1; // Return -1 to indicate error
    }

    int wordCount = 0;
    string line;
    while (getline(file, line)) {
        istringstream iss(line);
        string word;
        while (iss >> word) {
            wordCount++;
        }
    }

    file.close();
    return wordCount;
}

int main() {
    string filename;
    cout << "Enter the file name: ";
    cin >> filename;

    int wordCount = countWordsInFile(filename);
    if (wordCount != -1) {
        cout << "Total number of words in the file: " << wordCount << endl;
    }

    return 0;
}
