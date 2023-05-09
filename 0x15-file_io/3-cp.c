#include <stdio.h>
#include "main.h"
#include <stdlib.h>

char *create_buffer(char *file);
void close_file(int fd);

/**
 * This program reads a text file from the given source path and writes it to
 * the given destination path.
 *
 * @param argc The number of command-line arguments
 * @param argv The array of command-line arguments
 * @return 0 on success, 1 on error
 */
int main(int argc, char *argv[]) {
    // Check that we have exactly two arguments
    if (argc != 3) {
        fprintf(stderr, "Usage: %s <src> <dst>\n", argv[0]);
        return 1;
    }

    // Open the source file for reading
    FILE *src_file = fopen(argv[1], "r");
    if (src_file == NULL) {
        fprintf(stderr, "Error: could not open source file %s\n", argv[1]);
        return 1;
    }

    // Open the destination file for writing
    FILE *dst_file = fopen(argv[2], "w");
    if (dst_file == NULL) {
        fprintf(stderr, "Error: could not open destination file %s\n", argv[2]);
        fclose(src_file);
        return 1;
    }

    // Read characters from the source file and write them to the destination file
    int c;
    while ((c = fgetc(src_file)) != EOF) {
        if (fputc(c, dst_file) == EOF) {
            fprintf(stderr, "Error: write error occurred while copying %s to %s\n", argv[1], argv[2]);
            fclose(src_file);
            fclose(dst_file);
            return 1;
        }
    }

    // Close the files and exit with success
    fclose(src_file);
    fclose(dst_file);
    return 0;
}
