#include<stdio.h>
#include<string.h>
int main() {
    FILE *inputFile = fopen("inp.txt", "r");
    FILE *outputFile = fopen("out.txt", "w");
    if (inputFile == NULL || outputFile == NULL) {
        printf("Unable to open the file.\n");
        return 1;
    }
 
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
    FILE* file = fopen("out.txt", "r");
 
    char line[256];
 
    while (fgets(line, sizeof(line), file)) {
        printf("%s", line);
    }
    fclose(file);
    return 0;
}
