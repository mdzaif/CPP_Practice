#include <iostream>
#include <fstream>
#include <regex>
#include <unordered_set>
using namespace std;

int main() {
    std::ifstream file("operator.txt");
    if (!file.is_open()) {
        std::cerr << "Error: Unable to open file." << std::endl;
        return 1;
    }

    std::unordered_set<std::string> identifiers;
    std::unordered_set<std::string> operators;

    std::regex identifierRegex("[a-zA-Z_][a-zA-Z0-9_]*");
    std::regex operatorRegex("[\\+\\-\\*\\/\\%\\=\\&\\|\\<\\>\\!\\^\\~\\?\\:\\,\\;]{1,2}");
    std::regex quotedStringRegex("\"([^\"]*)\"");

    std::string line;
    while (std::getline(file, line)) {
        if (line.find("#") == 0) {
            continue;
        }


        line = std::regex_replace(line, quotedStringRegex, "");

        auto words_begin = std::sregex_iterator(line.begin(), line.end(), identifierRegex);
        auto words_end = std::sregex_iterator();
        for (auto it = words_begin; it != words_end; ++it) {
            identifiers.insert(it->str());
        }

        auto op_begin = std::sregex_iterator(line.begin(), line.end(), operatorRegex);
        auto op_end = std::sregex_iterator();
        for (auto it = op_begin; it != op_end; ++it) {
            operators.insert(it->str());
        }
    }

    std::cout << "Identifiers:" << std::endl;
    for (const auto& identifier : identifiers) {
        std::cout << identifier << std::endl;
    }

    std::cout << "Operators:" << std::endl;
    for (const auto& m : operators) {
        if(m == "++" || m == "--") cout<<m<< "is an Unary Operator"<<endl;
                else if(m == "+" || m == "-" ||m == "*" || m == "/" || m == "%") cout<<m << " is a Arithmetic Operator"<<endl;
                else if (m == "<" || m == "<=" || m == ">" || m == ">=" || m == "==" || m =="!=") cout<<m << " is a Relational Operator"<<endl;
                else if (m == "&&" || m == "||" || m == "!=" ) cout<<m << " is Logical Operator"<<endl;
                else if (m == "=" || m == "+=" || m == "-="|| m == "*=" || m == "/=" || m =="%=") cout<<m << " is a Assignment Operator"<<endl;
                else if (m == "&" || m == "|" || m == "<<" || m == ">>" || m == "~" || m =="^") cout<<m << " is Relational Operator"<<endl;
                else if (m == "<" || m == "<=" || m == ">" || m == ">=" || m == "==" || m =="!=") cout<<m << " is Relational Operator"<<endl;
                else cout<<m << " is a Ternary Operator"<<endl;
    }

    return 0;
}
