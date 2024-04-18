#include <stdio.h>
#include<string.h>
int main() {
    FILE *inputFile = fopen("out.txt", "r");
    FILE *outputFile = fopen("space_out.txt", "w");
    if (inputFile == NULL || outputFile == NULL) {
        printf("Unable to open the file.\n");
        return 1;
    }

 
    char line[256];
    char line1[256];
 
    while (fgets(line, sizeof(line), inputFile)) {
        if (strlen(line) > 1){
			fputs(line, outputFile);
        }
    }
    
	fclose(inputFile);
	fclose(outputFile);
	
	FILE *file = fopen("space_out.txt", "r");

    while (fgets(line1, sizeof(line1), file)){
		printf("%s", line1);
    }
    fclose(file);
    return 0;
}
