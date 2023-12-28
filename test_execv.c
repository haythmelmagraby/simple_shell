#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main(int argc, char** argv) {
    int i = 0;
    char** args = split_string(argv[1], " ");
    
    int args_count = 2;  // Include space for the command and NULL pointer
    while (argv[args_count] != NULL) {
        args = realloc(args, sizeof(char*) * (args_count + 1));
        args[args_count - 1] = argv[args_count];
        args_count++;
    }
    
    args[args_count - 1] = NULL;  // Set the last argument to NULL
    
    while (args[i] != NULL) {
        printf("%s\n", args[i]);
        i++;
    }
    
    if (execve(args[0], args, NULL) == -1) {
        perror("ERROR");
    }
    
    free(args);  // Free the allocated memory
    
    return 0;
}
