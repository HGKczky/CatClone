#include <stdio.h>
int main(int argc, char *argv[]){
    FILE *fileptr;
    int character;
    fileptr = fopen(argv[1], "r");
    if(fileptr == NULL){
        printf("Error Opening the file");
    }
    while ((character = fgetc(fileptr)) != EOF) {
        printf("%c",character); // Output character to standard output
    }
    printf("\n");
    fclose(fileptr);
    return 0;
}