// Create file, write, append, and delete.

#include <stdio.h>

int main() {
    FILE *fp;

    // Write to file
    fp = fopen("myfile.txt", "w");
    fprintf(fp, "Hello, this is written to the file.\n");
    fclose(fp);
    printf("Written to file.\n");

    // Append to file
    fp = fopen("myfile.txt", "a");
    fprintf(fp, "This line is appended.\n");
    fclose(fp);
    printf("Appended to file.\n");

    // Read and display
    char line[100];
    fp = fopen("myfile.txt", "r");
    printf("File contents:\n");
    while (fgets(line, sizeof(line), fp))
        printf("%s", line);
    fclose(fp);

    // Delete file
    remove("myfile.txt");
    printf("File deleted.\n");

    return 0;
}
