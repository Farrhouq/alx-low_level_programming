#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[]) {
    if (argc != 2) {
        fprintf(stderr, "Error\n");
        return 1;
    }

    int num_bytes = atoi(argv[1]);

    if (num_bytes < 0) {
        fprintf(stderr, "Error\n");
        return 2;
    }

    // Create a command to disassemble the main function
    char command[100];
    snprintf(command, sizeof(command), "objdump -d -j .text -M intel %s | grep 'main>' | cut -f2", argv[0]);

    // Open a pipe to read the disassembled opcodes
    FILE *pipe = popen(command, "r");
    if (!pipe) {
        perror("popen");
        return 3;
    }

    char opcode[3];
    int count = 0;

    // Read and print the opcodes
    while (fgets(opcode, sizeof(opcode), pipe) && count < num_bytes) {
        printf("%s", opcode);
        count++;
    }

    printf("\n");
    pclose(pipe);

    return 0;
}
