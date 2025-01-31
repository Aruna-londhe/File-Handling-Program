#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *file;
    char data[100];

    // Creating and writing to a file
    file = fopen("Codtech.txt", "w");  // "w" mode creates a new file or overwrites if the file exists.
    if (file == NULL) {
        printf("Error opening file for writing.\n");
        return 1;
    }
    fprintf(file, "This is a line of text.\n");
    fprintf(file, "File operations in C are demonstrated here.\n");
    fprintf(file, "File handling in C allows you to manage data efficiently.\n");  // New sentence
    fclose(file);
    printf("Data written to file successfully.\n");

    // Reading from the file
    file = fopen("Codtech.txt", "r");  // "r" mode opens the file for reading.
    if (file == NULL) {
        printf("Error opening file for reading.\n");
        return 1;
    }
    printf("\nReading from the file:\n");
    while (fgets(data, sizeof(data), file)) {
        printf("%s", data);
    }
    fclose(file);

    // Appending to the file
    file = fopen("example.txt", "a");  // "a" mode opens the file for appending.
    if (file == NULL) {
        printf("Error opening file for appending.\n");
        return 1;
    }
    fprintf(file, "Appending data to an existing file helps in maintaining a continuous record.\n");  // New sentence for appending
    fclose(file);
    printf("\nData appended to file successfully.\n");

    // Reading the file again after appending
    file = fopen("Codtech.txt", "r");  // "r" mode opens the file for reading.
    if (file == NULL) {
        printf("Error opening file for reading.\n");
        return 1;
    }
    printf("\nReading the file after appending:\n");
    while (fgets(data, sizeof(data), file)) {
        printf("%s", data);
    }
    fclose(file);

    return 0;
}
