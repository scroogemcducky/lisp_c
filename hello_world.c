#include <stdio.h>
#include <stdlib.h>

#include <editline/readline.h>




int main(int argc, char** argv) {
    puts("lisp C version 0.0.1");
    puts("Press Ctrl+c to quit\n");

    while (1) {
        char* input = readline("lisp> ");
        add_history(input);
        printf("No, %s\n", input);
        free(input);
    }
    return 0;

}