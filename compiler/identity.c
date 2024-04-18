#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

#define MAX_KEYWORDS 32
#define MAX_KEYWORD_LENGTH 20
#define MAX_VARIABLES 100
#define MAX_VARIABLE_LENGTH 30

const char *keywords[] = {
    "auto", "break", "case", "char", "const", "continue", "default", "do",
    "double", "else", "enum", "extern", "float", "for", "goto", "if",
    "int", "long", "main", "printf", "register", "return", "scanf" "short", "signed", "sizeof",
    "static", "struct", "switch", "typedef", "union", "unsigned", "void",
    "volatile", "while",
};

int is_keyword(const char *word) {
    for (int i = 0; i < MAX_KEYWORDS; i++) {
        if (strcmp(word, keywords[i]) == 0) {
            return 1;
        }
    }
    return 0;
}

int is_valid_variable(const char *word) {
    if (!isalpha(word[0]) && word[0] != '_') {
        return 0;
    }

    for (int i = 1; i < strlen(word); i++) {
        if (!isalnum(word[i]) && word[i] != '_') {
            return 0;
        }
    }

    return 1;
}

int main() {
    char filename[1000];
    printf("Enter a file name: ");
    scanf("%s", filename);
    FILE *file = fopen(filename, "r");

    if (file == NULL) {
        printf("Could not open file: %s\n", filename);
        return 1;
    }

    char word[MAX_VARIABLE_LENGTH];
    char variables[MAX_VARIABLES][MAX_VARIABLE_LENGTH];
    int keyword_count = 0, variable_count = 0, duplicate_count = 0;

    while (fscanf(file, "%s", word) == 1) {
        // Remove non-alphanumeric characters from the word
        int len = strlen(word);
        for (int i = 0; i < len; i++) {
            if (!isalnum(word[i]) && word[i] != '_') {
                word[i] = '\0';
                break;
            }
        }

        if (is_keyword(word)) {
            printf("Keyword: %s\n", word);
            keyword_count++;
        } else if (is_valid_variable(word)) {
            int found = 0;
            for (int i = 0; i < variable_count; i++) {
                if (strcmp(word, variables[i]) == 0) {
                    found = 1;
                    duplicate_count++;
                    break;
                }
            }
            if (!found) {
                printf("Variable: %s\n", word);
                strcpy(variables[variable_count], word);
                variable_count++;
            }
        }
    }

    printf("\nTotal number of keywords found: %d\n", keyword_count);
    printf("Total number of variables found: %d\n", variable_count);
    printf("Total number of duplicate variables found: %d\n", duplicate_count);

    fclose(file);
    return 0;
}
