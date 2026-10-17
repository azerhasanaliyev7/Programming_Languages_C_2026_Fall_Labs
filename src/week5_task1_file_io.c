/*
 * Lab 4, Task 1
 * Name: Azar Hasanaliyev
 * Student ID: 251ADB034
 */

 

#include <stdio.h>

int main(void) {
    const char *filename = "data.txt";
    FILE *file;
    char line[256];
    int lines_read = 0;

    printf("Writing lines to %s...\n", filename);

    file = fopen(filename, "w");
    if (file == NULL) {
        perror("Error opening file for writing");
        return 1;
    }

    fprintf(file, "Hello, file I/O in C!\n");
    fprintf(file, "This is another line.\n");

    if (fclose(file) != 0) {
        perror("Error closing file after writing");
        return 1;
    }

    printf("Reading contents:\n");

    file = fopen(filename, "r");
    if (file == NULL) {
        perror("Error opening file for reading");
        return 1;
    }

    while (fgets(line, sizeof(line), file) != NULL) {
        printf("%s", line);
        lines_read++;
    }

    if (ferror(file)) {
        perror("Error reading file");
        fclose(file);
        return 1;
    }

    if (fclose(file) != 0) {
        perror("Error closing file after reading");
        return 1;
    }

    printf("Lines read: %d\n", lines_read);

    return 0;
}
