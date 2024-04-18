#include<iostream>
#include <fstream>
#include <string>
#include <regex>
#include <unordered_set>
#include <stdio.h>
#include<cstring>

using namespace std;

int main() {
    FILE *inputFile = fopen("inp.txt", "r");
    FILE *outputFile = fopen("out.txt", "w");
    if (inputFile == NULL || outputFile == NULL) {
        printf("Unable to open the file.\n");
        return 1;
    }

    // remove space and comments
    char currentChar, nextChar;
    while ((currentChar = fgetc(inputFile)) != EOF) {
        if (currentChar == '/') {
            nextChar = fgetc(inputFile);
            if (nextChar == '/') {
                // Ignore the rest of the line
                while ((currentChar = fgetc(inputFile)) != '\n' && currentChar != EOF);
            }
            else if (nextChar == '*') {
                // Ignore until the closing */
                while (!((currentChar = fgetc(inputFile)) == '*' && (nextChar = fgetc(inputFile)) == '/')) {
                    if (currentChar == EOF) {
                        printf("Error: Unclosed multi-line comment.\n");
                        return 1;
                    }
                }
            }
            else {
                fputc(currentChar, outputFile);
                fputc(nextChar, outputFile);
            }
        }
        else {
            fputc(currentChar, outputFile);
        }
    }
    fclose(inputFile);
    fclose(outputFile);
    FILE* File = fopen("out.txt", "r");

    char Line[256];

    // Our code:
    cout<<"After removing sapce and comment: "<<endl;
    while (fgets(Line, sizeof(Line), File)) {
        if(strlen(Line) > 1) printf("%s", Line);
    }
    fclose(File);

    //Identifiers and Operators

    std::ifstream file("out.txt");
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
    cout<<endl;
    std::cout << "Identifiers:" << std::endl;
    for (const auto& identifier : identifiers) {
        std::cout << identifier << std::endl;
    }

    cout<<"---------------------"<<endl;
    cout<<"Total Identifiers: "<<identifiers.size()<<endl;
    cout<<endl;
    std::cout << "Operators:" << std::endl;
    for (const auto& op : operators) {
        std::cout << op << std::endl;
    }

     cout<<"---------------------"<<endl;
    cout<<"Total operator: "<<operators.size()<<endl;
    return 0;
}
