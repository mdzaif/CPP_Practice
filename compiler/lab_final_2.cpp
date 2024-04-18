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
     regex quote_regex("\"[^\"]*\"");
    string line;
    int counter = 0;
    while (getline(file, line)) {
        if (line.find("#") == 0) {
            continue;
        }
        smatch match;
        line = regex_replace(line, quote_regex, "");

        while (regex_search(line, match, op_regex)) {
            for (auto m : match) {
                if(m == "++" || m == "--") cout<<m<< "is an Unary Operator"<<endl;
                else if(m == "+" || m == "-" ||m == "*" || m == "/" || m == "%") cout<<m << " is a Arithmetic Operator"<<endl;
                else if (m == "<" || m == "<=" || m == ">" || m == ">=" || m == "==" || m =="!=") cout<<m << " is a Relational Operator"<<endl;
                else if (m == "&&" || m == "||" || m == "!=" ) cout<<m << " is Logical Operator"<<endl;
                else if (m == "=" || m == "+=" || m == "-="|| m == "*=" || m == "/=" || m =="%=") cout<<m << " is a Assignment Operator"<<endl;
                else if (m == "&" || m == "|" || m == "<<" || m == ">>" || m == "~" || m =="^") cout<<m << " is Relational Operator"<<endl;
                else if (m == "<" || m == "<=" || m == ">" || m == ">=" || m == "==" || m =="!=") cout<<m << " is Relational Operator"<<endl;
                else cout<<m << " is a Ternary Operator"<<endl;


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
