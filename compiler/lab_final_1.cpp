#include <iostream>
#include <fstream>
#include <string>
#include <regex>

using namespace std;

int main() {
    string filename;
    cout << "Enter the name of the file: ";
    cin >> filename;

    ifstream file(filename);
    if (!file.is_open()) {
        cerr << "Error opening file." << endl;
        return 1;
    }

    regex op_regex("[\\+\\-\\*\\/\\%\\=\\&\\|\\<\\>\\!\\^\\~\\?\\:]{1,2}");
    string line;
    int counter = 0;
    while (getline(file, line)) {
        if (line.find("#") == 0) {
            continue;
        }
        smatch match;
        while (regex_search(line, match, op_regex)) {
            for (auto m : match) {
                cout << "Operator found: " << m << endl;
                counter++;
            }
            line = match.suffix().str();
        }
    }
    cout<<"---------------------------"<<endl;
    cout<<"total Operator: "<<counter<<endl;
    file.close();
    return 0;
}
