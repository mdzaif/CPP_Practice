#include <stdio.h>
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
    FILE* file1 = fopen("combined.txt", "w");
 
    char line[256];
 	char line1[256];
 	
    while (fgets(line, sizeof(line), file)) {
		if(strlen(line) > 1){
		fputs(line, file1);
        }
    }
    fclose(file);
	fclose(file1);
	FILE* file2 = fopen("combined.txt", "r");
	
    while(fgets(line1, sizeof(line1), file2)){
		printf("%s", line1);
    }
    printf("\n");
    fclose(file2);
    return 0;
}

